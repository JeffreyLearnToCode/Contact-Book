#include <iostream>
#include "Contact.h"
#include "Menu.h"
#include <algorithm>

int main() {
    std::cout << "Welcome to Contact!\n\n";

    const std::pmr::vector<std::string_view> options = {"Enter new Contact", "Find Contact",
        "Delete Contact", "Edit Contact"};
    constexpr int OFFSET = 1;
    std::pmr::vector<Contact> contacts;

    auto mainMenu = Menu(options, OFFSET);

    do {
        const int choice = mainMenu.choiceOptions();

        if (choice == 1) {
            const std::string name = mainMenu.getLine("Please enter your name");
            const std::string phone_number = mainMenu.getLine("Please enter your phone number");
            const std::string email = mainMenu.getLine("Please enter your email");

            const auto contact =  Contact(name, phone_number, email);
            contacts.emplace_back(name, phone_number, email);

            contact.print();

        }

        if (choice == 2) {
            const std::string name = mainMenu.getLine("Please find user by name: ");
            auto it = std::find_if(contacts.begin(), contacts.end(), [&](Contact &c) {
                return c.getName() == name;
            });

            if (it != contacts.end()) {
                it->print();
            }else {
                std::cout << "Please enter a valid name!\n";
            }
        }

    }while (true);

    return 0;
}