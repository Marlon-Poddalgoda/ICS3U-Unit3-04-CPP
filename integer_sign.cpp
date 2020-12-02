// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on December 2020
// This program identifies the sign of an integer

#include <iostream>

int main() {
    // this function identifies the sign of an integer

    std::cout << "This program reads and identifies integers." << std::endl;

    // variable declarations
    int user_integer;

    // input
    std::cout << "Enter a positive or negative integer: ";
    std::cin >> user_integer;
    std::cout << "" << std::endl;

    // process
    if (user_integer > 0) {
        // output
        std::cout << "This integer is positive (+).";
    } else if (user_integer < 0) {
        // output
        std::cout << "This integer is negative (-).";
    } else if (user_integer == 0) {
        // output
        std::cout << "This integer is 0.";
    } else {
        std::cout << "Error, please try again";
    }
}
