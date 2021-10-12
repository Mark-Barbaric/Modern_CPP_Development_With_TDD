#ifndef ADDRESS_EXTRACTOR_H
#define ADDRESS_EXTRACTOR_H

#include <json/reader.h>
#include <json/value.h>
#include <string>
#include "Address.h"

class AddressExtractor{

    Json::Value jsonAddressFrom(const std:;string& json) const;
    void populate(Address& address, Json::Value& jsonAddress) const;
    Json::Value parse(const std::string& json) const;
    std::string getString(Json::Value& result, const std::string& name) const;

public:
    AddressExtractor() = default;
    Address addressFrom(const std::string& json) const;

};




#endif