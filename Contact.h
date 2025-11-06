//
// Created by Weste on 11/1/2025.
//

#pragma once

#include <string>
#include <string_view>
#include <iostream>
#include <vector>

class Contact {
    std::string name_;
    std::string phone_;
    std::string email_;

    static std::pmr::vector<Contact> contacts_;

public:
    Contact(std::string_view name, std::string_view phoneNumber, std::string_view email);
    Contact();

    void setName(std::string_view name);
    std::string getName();

    void setPhoneNumber(std::string_view phoneNumber);
    std::string_view getPhoneNumber();

    void setEmail(std::string_view email);
    std::string_view getEmail();

    void addContact(const Contact &contact);

    void print() const;
};

