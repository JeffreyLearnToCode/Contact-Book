//
// Created by Weste on 11/1/2025.
//

#include "Menu.h"

Menu::Menu(const std::pmr::vector<std::string_view> &option, int offset)
    : option_(option), offset_(offset) {}

Menu::Menu() {}

void Menu::setOption(const std::pmr::vector<std::string_view> &option) {
    this->option_ = option;
}

void Menu::setOffset(const int &offset) {
    this->offset_ = offset;
}

void Menu::printOption() const {
    for (int i = 0; i < option_.size(); i++) {
        std::cout << (i+this->offset_) << ". " << option_[i] << std::endl;
    }
};

int Menu::choiceOption() const {
    const int low = (static_cast<int>(option_.size()) - static_cast<int>(option_.size())) + offset_;
    const int high = static_cast<int>(option_.size()) + 1;

    for (;;) {
        this->printOption();
        if (int d; std::cin >> d && low <= d && d <= high) {
            return d;
        }

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please pick the correct options" << std::endl;
    }
}

std::string Menu::getLine(const std::string_view question) {
    for (;;) {
        std::cout << question << ": ";

        if (std::string d; std::getline(std::cin, d) &&
            !d.empty()) {
            return d;
        }

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please pick the correct options" << std::endl;
    }
}
