//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 9: working with while loops

#include <iostream>

int main() {
    // While Statement
    std::cout << "While Statement";
    
    int index = 1;
    int result = 1;
    
    while(index <= 10) {
        std::cout << "Executing index -> " << index << std::endl;
        result *= index;
        index++;
    }
    
    std::cout << "Result product index: " << result;
    std::cout << "\n\n";
    
    std::cout << "------------------------------------------------------------------------" << std::endl;

    // Do While Statement
    std::cout << "\nDo While Statement";
    
    int menu = 0;
    std::string selected;
    do {
        std::cout << "Select an option [1=pizza | 2=soup | 3=beef | 4=ramen]: ";
        std::cin >> menu;
        
        switch (menu) {
            case 1:
                std::cout << "You've selected pizza\n" << std::endl;
                break;
                
            case 2:
                std::cout << "You've selected soup\n" << std::endl;
                break;
                
            case 3:
                std::cout << "You've selected beef\n" << std::endl;
                break;
                
            case 4:
                std::cout << "You've selected ramen\n" << std::endl;
                break;
                
            default:
                std::cout << "Invalid option.";
                menu = 0;
                break;
        }
    } while (menu > 0);
    
    std::cout << "\n\n";
    
    return EXIT_SUCCESS;
}

