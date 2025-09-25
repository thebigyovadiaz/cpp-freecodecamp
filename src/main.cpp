//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 2: variables and basic data types in C++

#include <iostream>

using namespace std;

int main() {
    // Basic data types: string, char, int, float, boolean, double
    string name;
    name = "Pepito Perez";
    
    char genre;
    genre = 'M';
    
    int age;
    age = 25;
    
    float height;
    height = 1.72;
    
    double altitud;
    altitud = 2000.45;
    
    bool dev;
    dev = true;
    
    cout << "Name: " << name << " - Dev: " << dev << " - Age: " << age << " years old." << endl;
    cout << "Height: " << height << endl;
    cout << "Altitud: " << altitud << endl;
    
    return EXIT_SUCCESS;
}

