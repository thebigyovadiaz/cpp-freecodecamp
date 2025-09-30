//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 3: Working with string

#include <iostream>

using namespace std;

int main() {
    string phrase = "FreeCodeCamp Course";
    cout << "Phrase: " << phrase << endl;
    
    // Copy phrase
    string phraseCopy = phrase;
    
    // Update char in original phrase
    phrase[4] = 'W';
    cout << "Phrase updated: " << phrase;
    
    // Get length original phrase
    long lengthOP = phrase.length();
    cout << "\nLength phrase: " << lengthOP;
    
    // Find word in copy phrase
    cout << "\nCopy Phrase: " << phraseCopy << endl;
    string word = "Course";
    long startWordIndex = phraseCopy.find(word);
    cout << "Word Start Index: " << startWordIndex << endl;
    
    // Replace word in copy phrase
    long lengthWordFound = word.length();
    phraseCopy.replace(startWordIndex, lengthWordFound, "");
    cout << "\nPhrase with new word: " << phraseCopy << endl;
    
    // Substring of copy phrase
    string subStrPhraseC = phraseCopy.substr(4, 4);
    cout << "\nSubstring: " << subStrPhraseC;
    
    cout << "\n\n";
    return EXIT_SUCCESS;
}

