//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 13: working with pointers

#include <iostream>

using namespace std;

int main() {
    int age = 23;
    string name = "Michael Jordan";
    double gpa = 2.9;
    
    // Get space pointer variables
    cout << "Age Pointer: " << &age << endl;
    cout << "Name Pointer: " << &name << endl;
    cout << "Gpa Pointer: " << &gpa << endl;
    
    // Create pointer variables
    int *pAge = &age;
    // Get pointer variable
    cout << "\npAge pointer: " << pAge << endl;
    // Get pointer value
    cout << "pAge pointer value: " << *pAge;
    
    cout << endl;
    
    return EXIT_SUCCESS;
}

