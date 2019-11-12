// Copyright (c) 2019 Matsuru All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Nov 2019
// This is program prints all numbers form 1000 to 2000 in 5 numbers per line

#include <iostream>
#include <string>

void temperature() {
    // This calculates celsius to Fahrenheit

    // variables
    std::string celsius;
    float fahrenheit = 0;

    // input
    std::cout << "What is the Celsius temperature: " << std::endl;
    std::cin >> celsius;

    try {
        // turns variable into float
        float celsiusFloat = std::stof(celsius);

        // process
        fahrenheit = (celsiusFloat * 1.8) + 32;

        // output
        std::cout << "The temperature in Fahrenheit is " << fahrenheit << "°" <<
                    std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}


main() {
    // This runs functions
    temperature();
}
