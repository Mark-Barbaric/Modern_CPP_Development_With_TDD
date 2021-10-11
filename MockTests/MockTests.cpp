#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Http.h"

class APlaceDescriptionService : public testing::Test {
public:
    static const std::string ValidLatitude;
    static const std::string ValidLongitude;
};

const std::string APlaceDescriptionService::ValidLatitude("38.005");
const std::string APlaceDescriptionService::ValidLongitude("-104.44");

class HttpStub : public Http{

public:
    HttpStub() = default;
    MOCK_METHOD0(initialize, void());
    MOCK_CONST_METHOD1(get, std::string(const std::string&));
};

TEST_F(APlaceDescriptionService, MakesHttpRequestToObtainAddress){
    HttpStub httpStub;
    std::string urlStart{
        "http://open.mapquestapi.com/nominatim/v1/reverse?format=json&"};
    auto expectedURL = urlStart +
            "lat=" + APlaceDescriptionService::ValidLatitude + "&" +
            "lon=" + APlaceDescriptionService::ValidLongitude;

    EXPECT_CALL(httpStub, get(expectedURL));
    PlaceDescriptionService service{&httpStub};

    service.summaryDescription(ValidLatitude, ValidLongitude);
}
