//
// main.cpp
// FreeCodeCamp-Course
//
// Chapter 11: working with for loops

#include <iostream>

int getPow(int baseNum, int powNum) {
	int result = 1;
	
	for (int i = 0; i < powNum; i++) {
		result = result * baseNum;
	}
	
	return result;
}

int main() {
	int nums [] = {1, 23, 4, 7, 100};
	
	// Use sizeof to get array length
	int numsLength = sizeof(nums) / sizeof(nums[0]);
	
	for(int numb = 0; numb < numsLength; numb++) {
		std::cout << nums[numb] << std::endl;
	}
	
	std::cout << "\nResult GetPow: " << getPow(2, 4);
    
    std::cout << "\n\n";
    
    return EXIT_SUCCESS;
}

