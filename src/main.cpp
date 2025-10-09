//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 8: working with if-else and switch

#include <iostream>
#include <string>

using namespace std;

string getMessageAge(int age) {
    return "\nYou're " + to_string(age) + " years old.";
}

string getTemp(char gender) {
    switch (gender) {
        case 'M':
            return "\nYou're a male.";
        case 'F':
            return "\nYou're a female.";
        default:
            return "\nYou aren't know.";
    }
}

string useIfStatement(int age) {
    // Operators: <, <=, >, >=, !=, &&, ||
    if (age >= 16 && age <= 18) {
        return "\nYou can watch adult films!";
    } else if (age >= 14) {
        return "\nYou are so near!";
    } else if (age <= 10 || age == 0) {
        return "\nYour a younger child!";
    } else {
        return "\nYou are an adult!";
    }
}

string getGreatingResult(string name, int age, char gender) {
    string message = "\nWelcome aboard " + name;
    string strGender = getTemp(gender);
    string strMessageAge = getMessageAge(age);
    string strMessageAllow = useIfStatement(age);
    
    message += strMessageAge;
    message += strGender;
    message += strMessageAllow;
    
    return message;
}

int main() {
    string name, result;
    char gender;
    int age;
    
    cout << "What's your name?: " << endl;
    getline(cin, name);
    
    cout << "What's your age?: " << endl;
    cin >> age;
    
    cout << "What's your gender? (M=male | F=female): " << endl;
    cin >> gender;
    
    result = getGreatingResult(name, age, gender);
    cout << result;
    
    cout << "\n\n";
    
    return EXIT_SUCCESS;
}

