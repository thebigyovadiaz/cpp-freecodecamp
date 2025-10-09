//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 10: building a guessing game

#include <iostream>

int main() {
    int secretNum = 7;
    int guessNum = 0;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;
    
    while(secretNum != guessNum && !outOfGuesses) {
        if (guessCount < guessLimit) {
            std::cout << "Enter number: ";
            std::cin >> guessNum;
            guessCount++;
        } else {
            outOfGuesses = true;
        }
    }
    
    if (outOfGuesses) {
        std::cout << "\nYou Lose!";
    } else {
        std::cout << "\nY2ou Win!";
    }
    
    std::cout << "\n\n";
    
    return EXIT_SUCCESS;
}

