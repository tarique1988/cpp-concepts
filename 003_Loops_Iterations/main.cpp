/*
for, nested for, for..in, while, and do-while.
created by: Tarique Ali Mirza <tarique1988@gmail.com
date: 23rd August 2019
*/
#include <iostream>

int main() {
	std::cout << "A simple for loop: Prints 0 to 9" << std::endl;
	// A simple for loop
	for(int i=0; i<10; ++i){
		std::cout << i << std::endl;
	}
	std::cout << "A nested for loop: Prints 10 stars (*) for 10 lines" << std::endl;
	// A nested for loop
	for(int i=0; i<10; ++i){
		for(int j = 0; j < 10; ++j){
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	
	std::cout << "A simple for..in loop: Prints each character of a string on a new line." << std::endl;
	// A simple for in loop for(type item : items)
	for(char ch : "somestring"){
		if(ch != '\0')
			std::cout << ch << std::endl;
	}
	
	std::cout << "A simple while loop: Prints 0 to 9" << std::endl;
	// A simple while loop
	int i = 0;
	while(i < 10){
		std::cout << i << std::endl;
		++i;
	}
	
	std::cout << "A simple do-while loop: Prints " << i << " to 0." << std::endl;
	// A simple do while loop
	do{
		std::cout << i << std::endl;
		--i;
	} while(i >= 0);
	
	return 0;
}

