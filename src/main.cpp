//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 3: working with strings

#include <iostream>

using namespace std;

int main() {
    string phrase = "FreeCodeCamp Course";
    cout << "Phrase: " << phrase << endl;
    
    // Copy phrase
    string copyPhrase = phrase;
    
    // Update char in original phrase
    phrase[0] = 'T';
    cout << "Phrase updated: " << phrase << endl;
    
    // Get length original phrase
    long lengthPhO = phrase.length();
    cout << "Length: " << lengthPhO << endl;
    
    // Find word in copy phrase
    cout << "Copy phrase: " << copyPhrase << endl;
    string word = "Course";
    long startWordIndex = copyPhrase.find(word);
    cout << "Word start index: " << startWordIndex << endl;
    
    // Replace word in copy phrase
    long lengthWord = word.length();
    copyPhrase.replace(startWordIndex, lengthWord, "");
    cout << "Phrase with word replaced: " << copyPhrase << endl;
    
    // Substring of copy phrase
    string subStringPhrase = copyPhrase.substr(0, 4);
    cout << "New Substring: " << subStringPhrase;
    
    cout << "\n\n";
    
    return EXIT_SUCCESS;
}

