// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : November 2022
// ICS3U-Unit4-07.cpp File, learning while and if statements in C++.

#include <iostream>

int main() {
    // creating variables
    int counter = 1000;

    // process and output
    std::cout << "\n";
    while (counter <= 2000) {
        std::cout << counter << " ";
        counter++;
        if (counter % 5 == 0) {
            std::cout << "\n";
        }
    }

    std::cout << "\n\n\nDone.\n";
}
