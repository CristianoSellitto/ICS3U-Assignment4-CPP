// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if a letter is capital or not

#include <iostream>

char letter;
int asciiInteger;

int main() {
    // Finds if a letter is capital or not

    std::cout << "Enter a single letter: ";
    std::cin >> letter;
    std::cout << std::endl;
    try {
        asciiInteger = static_cast<int>(letter);
        if (asciiInteger >= 65 && asciiInteger <= 90) {
            std::cout << letter << " is a capital letter.";
        } else if (asciiInteger >= 97 && asciiInteger <= 122) {
            std::cout << letter << " is not a capital letter.";
        } else {
            std::cout << letter << " is not a valid character.";
        }
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Error: " << letter;
        std::cout << " is not a single or valid character.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
