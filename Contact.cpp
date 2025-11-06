//
// Created by Weste on 11/1/2025.
//

#include "Contact.h"

Contact::Contact(const std::string_view name, const std::string_view phoneNumber, const std::string_view email)
    : name_(name), phone_(phoneNumber), email_(email) {
}

Contact::Contact(){}

void Contact::setEmail(const std::string_view email) {
    this->email_ = email;
    std::cout << "Email updated";
}

void Contact::setName(const std::string_view name) {
    this->name_ = name;
    std::cout << "Name updated";
}

void Contact::setPhoneNumber(const std::string_view phoneNumber) {
    this->phone_ = phoneNumber;
    std::cout << "Phone Number updated";
}

void Contact::print() const {
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Phone Number: " << phone_ << std::endl;
    std::cout << "Email: " << email_ << std::endl;
}

std::string Contact::getName() {
    return name_;
}

std::string_view Contact::getPhoneNumber() {
    return phone_;
}

std::string_view Contact::getEmail() {
    return email_;
}