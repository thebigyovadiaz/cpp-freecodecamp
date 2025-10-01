//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 4: working with numbers

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double subs, mult, div;
    int sum, divInt;
    
    sum = 5 + 4;
    subs = 3.45 - 2.1;
    mult = 3 * 4.67;
    
    cout << "Sum: " << sum << " - Subs: " << subs << " - Mult: " << mult << endl;
    
    div = 10 / 3.0;
    divInt = 10 / 3.0;
    
    cout << "Div integer: " << divInt << " - Div double int: " << div;
    
    cout << "\n__________________________________________________" << endl;
    
    // Using math library
    cout << "\nRound: " << round(3.6);
    cout << "\nCeil: " << ceil(3.6);
    cout << "\nFloor: " << floor(3.6);
    cout << "\nMax: " << fmax(3.1, 4);
    cout << "\nMin: " << fmin(3.6, 3.59);
    cout << "\nSquare: " << sqrt(25);
    cout << "\nPow: " << pow(2, 4);
    
    cout << "\n\n";
    
    return EXIT_SUCCESS;
}

