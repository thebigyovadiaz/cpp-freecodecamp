//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 5: working with input and output - build a basic calculator

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num1, num2, operation;
    double result = 0;
    
    cout << "Digit a number: ";
    cin >> num1;
    
    if (num1 <= 0) {
        cout << "\nNumber invalid." << endl;
        return EXIT_FAILURE;
    }
    
    cout << "Digit another number: ";
    cin >> num2;
    
    if (num2 <= 0) {
        cout << "\nNumber invalid." << endl;
        return EXIT_FAILURE;
    }
    
    cout << "Select operation \n\t1 to sum \n\t2 to subs \n\t3 to div \n\t4 to multi \n\t5 to pow: ";
    cin >> operation;
    
    switch (operation) {
        case 1:
            result = num1 + num2;
            break;
            
        case 2:
            result = num1 - num2;
            break;
            
        case 3:
            result = num1 / num2;
            break;
            
        case 4:
            result = num1 * num2;
            break;
            
        case 5:
            result = pow(num1, num2);
            break;
            
        default:
            break;
    }
    
    cout << "\nResult: " << result;
    
    cout << "\n\n";
    
    return EXIT_SUCCESS;
}

