//
// Created by Weste on 11/1/2025.
//
#pragma once

#include <vector>
#include <string_view>
#include <limits>
#include <string>
#include<iostream>


class Menu {
    std::pmr::vector<std::string_view> option_;
    int offset_;

public:
    Menu(const std::pmr::vector<std::string_view> &option, int offset);
    Menu();

    void printOption() const;
    void setOption(const std::pmr::vector<std::string_view> &option);
    void setOffset(const int &offset);

    [[nodiscard]] int choiceOption() const;

    [[nodiscard]] std::string getLine(std::string_view question);
};


