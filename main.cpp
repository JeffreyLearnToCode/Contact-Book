#include <iostream>
#include "Contact.h"
#include "Menu.h"

int main() {
    std::cout << "Welcome to Contact!\n\n";

    const std::pmr::vector<std::string_view> options = {"Enter new Contact", "Find Contact",
        "Delete Contact", "Edit Contact"};
    constexpr int OFFSET = 1;

    auto mainMenu = Menu(options, OFFSET);

    do {
        const int choice = mainMenu.choiceOptions();

        if (choice == 1) {
            const std::string name = mainMenu.getLine("Please enter your name");
            const std::string phone_number = mainMenu.getLine("Please enter your phone number");
            const std::string email = mainMenu.getLine("Please enter your email");

            const auto contact =  Contact(name, phone_number, email);

            contact.print();
        }

        if (choice == 2) {
            break;
        }

    }while (true);

    return 0;
}