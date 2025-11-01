//
// Created by Weste on 11/1/2025.
//

#pragma once

#include <string>
#include <string_view>
#include <iostream>

class Contact {
    std::string name_;
    std::string phone_;
    std::string email_;

public:
    Contact(std::string_view name, std::string_view phoneNumber, std::string_view email);

    void setName(std::string_view name);
    std::string_view getName();

    void setPhoneNumber(std::string_view phoneNumber);
    std::string_view getPhoneNumber();

    void setEmail(std::string_view email);
    std::string_view getEmail();

    void print() const;
};

