//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 14: working with Classes and Objects

#include <iostream>
#include <string>

using namespace std;


class Book {
    private:
        int id;
        int pages;
    
    public:
        string author;
        string title;
    
        // Constructor
        Book() {
            id = 0;
            title = "No Title";
            author = "No Author";
            pages = 0;
        }
    
        Book(int aId, string aTitle, string aAuthor, int aPges) {
            title = aTitle;
            author = aAuthor;
            setPages(aPges);
            setID(aId);
        }
    
        // Setters Functions
        void setID(int aID) {
            id = aID;
        }
    
        void setPages(int aPages) {
            pages = aPages;
        }
        
        // Getters Functions
        int getID() {
            return id;
        }
    
        int getPages() {
            return pages;
        }
    
        string getBookDetails() {
            string details;
            details += "\tID: \t" + to_string(getID()) + "\n";
            details += "\tTitle: \t" + title + "\n";
            details += "\tAuthor: " + author + "\n";
            details += "\tPages: \t" + to_string(getPages()) + "\n";
            return details;
        }
};

class Chef {
    public:
        void makeChicken() {
            cout << "The chef makes chicken." << endl;
        }
    
        void makeSalad() {
            cout << "The chef makes salad." << endl;
        }
    
        void makeSpecialDish() {
            cout << "The chef makes BBQ ribs." << endl;
        }
};

class ItalianChef : public Chef {
    public:
        void makeLasagna() {
            cout << "The chef makes lasagna" << endl;
        }
        
        void makeSpecialDish() {
            cout << "The chef makes pasta carbonara." << endl;
        }
};

int main() {
    // Using Book Class
    Book book1(1, "Pragmatic Programmer", "David Thomas", 350);
    cout << book1.getBookDetails() << endl;
    
    cout << endl;
    
    Book book2(2, "Clean Code", "Auncle Bob", 400);
    cout << book2.getBookDetails() << endl;
    
    cout << endl;
    
    Book book3(3, "Clean Architecture", "Auncle Bob", 450);
    cout << book3.getBookDetails() << endl;
    
    cout << endl;
    
    // Using Chef Class
    Chef chef;
    chef.makeSpecialDish();
    
    // Inheritance
    ItalianChef italianChef;
    italianChef.makeSpecialDish();
    italianChef.makeLasagna();
    
    cout << endl;
    
    return EXIT_SUCCESS;
}
