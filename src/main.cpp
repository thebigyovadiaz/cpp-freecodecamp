//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 6: working with arrays

#include <iostream>

int main() {
    // Initialize an array and set default values
    int luckyNums [] = {1,2,3,4,5,6};
    
    // Get second value
    std::cout << luckyNums[1];
    
    // Set new value
    luckyNums[1] = 200;
    std::cout << "\nNew value: " << luckyNums[1];
    
    std::cout << "\n\n";
    
    return EXIT_SUCCESS;
}

