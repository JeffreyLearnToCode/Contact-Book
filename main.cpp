#include <iostream>
#include "Contact.h"

int main() {
    std::cout << "Welcome to Contact!\n\n";

    std::cout << "Please enter name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Please enter phone number: ";
    std::string phone_number;
    std::getline(std::cin, phone_number);

    std::cout << "Please enter email: ";
    std::string email;
    std::getline(std::cin, email);

    const auto contact =  Contact(name, phone_number, email);

    contact.print();

    return 0;
}