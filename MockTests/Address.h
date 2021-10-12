#include "../Helpers/SingleHeader.h"

struct Address {
    std::string road;
    std::string city;
    std::string state;
    std::string country;

    Address() = default;

    [[nodiscard]] std::string summaryDescription() const {
        return road + ", " + city + ", " + state + ", " + country;
    }
};