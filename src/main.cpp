//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 2: variables and basic data types

#include <iostream>

using namespace std;

int main() {
    // Data types: string, char, int, float, double, boolean, long
    string name;
    name = "Pepito Perez";
    
    char genre;
    genre = 'M';
    
    int age;
    age = 23;
    
    float weight;
    weight = 75.4;
    
    double height;
    height = 172.45;
    
    bool isDev;
    isDev = true;
    
    cout << "Name: " << name << " - Age: " << age << " years old. Is a dev: " << isDev << endl;
    cout << "Your weight: " << weight << " - Height: " << height;
    
    cout << "\n";
    
    return EXIT_SUCCESS;
}

