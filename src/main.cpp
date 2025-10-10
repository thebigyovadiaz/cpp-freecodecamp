//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 12: working with nested loops and 2D array

#include <iostream>


int main() {
    int numbGrid [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // Get length array
    int lengthNumbGrid = sizeof(numbGrid) / sizeof(numbGrid[0]);
    
    for(int i = 0; i < lengthNumbGrid; i++) {
        // Get length internal array
        int lengthArrI = sizeof(numbGrid[1]) / sizeof(numbGrid[i][0]);
        for(int j = 0; j < lengthArrI; j++) {
            std::cout << "Item: " << i << " - Value: " << numbGrid[i][j] << std::endl;
        }
        std::cout << std::endl;
    }
    
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}

