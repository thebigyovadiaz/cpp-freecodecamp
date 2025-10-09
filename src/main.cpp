//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 7: working with functions

#include <iostream>

using namespace std;

// Void function because It don't use return statement
void sayHello() {
    cout << "Hello, Guy!" << endl;
}

// Function with return statement
string greetingPeople(string name) {
    string message;
    message = "\nWelcome aboard " + name + ".";
    return message;
}

// Signature functions
void printYourName(string name);
int cubeNumber(int numb);

int main() {
    sayHello();
    
    string name;
    int age;
    
    cout << "\nWhat's your name?: " << endl;
    getline(cin, name);
    //cin >> name;
    
    cout << "\nWhat's your age?: " << endl;
    cin >> age;
    
    string greeting;
    greeting = greetingPeople(name);
    cout << greeting;
    
    printYourName(name);
    
    int cubeResult = cubeNumber(age);
    cout << "\nYour cube age is: " << cubeResult;
    
    
    cout << "\n\n";
    
    return EXIT_SUCCESS;
}

void printYourName(string name) {
    cout << "\nYour name is: " << name;
}

int cubeNumber(int numb) {
    return numb * numb * numb;
}
