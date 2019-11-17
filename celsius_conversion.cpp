// Copyright (c) 2019 St Mother Teresa High School All rights reserved.
//
// Created by: Teddy Sannan
// Created on: October 2019
// This program gets user to guess a number
// with user input

#include <iostream>
#include <string>

int conversion() {
    std::string degreeAsString;
    int degreeAsNumber;
    int calculation;

    std::cout << "Input a number: ";
    std::cin >> degreeAsString;

    std::cout << "" << std::endl;

    try {
        degreeAsNumber = std::stoi(degreeAsString);

        calculation = (9/5)*degreeAsNumber+32;

        std::cout << (degreeAsNumber) << " degrees Celsius is " << (calculation)
        << " Degrees Fahrenheit" << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
}

int main() {
    conversion();
}
