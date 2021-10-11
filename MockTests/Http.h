#ifndef TDD_HTTP_H
#define TDD_HTTP_H

#include "../Helpers/SingleHeader.h"

struct Http{
    virtual ~Http() = default;
    virtual void initialize() = 0;
    [[nodiscard]] virtual std::string get(const std::string& url) const = 0;
};

#endif //TDD_HTTP_H
