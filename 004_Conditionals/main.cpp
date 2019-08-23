/*
Control flow: if-else, switch-case, conditional operators - (condition) ? val_if_true : val_if_false;
created by: Tarique Ali Mirza <tarique1988@gmail.com
date: 23rd August 2019
*/
#include <iostream>

int main() {
	bool play;
	int userSelection;
	std::cout << "Would you like to play a game?" << std::endl;
	std::cout << "1. Yes. Let's play!" << std::endl;
	std::cout << "2. No. I don't wanna play!" << std::endl;
	std::cin >> userSelection;
	// A simple control flow example with if->else-if->else
	if(userSelection == 1){
		play = true;
	} else if(userSelection == 2){
		std::cout << "You don't love me at all. Bye bye.. :(" << std::endl;
		play = false;
	} else{
		std::cout << "Invalid selection. Program will exit..." << std::endl;
		return -1;
	}
	if(play){
		std::cout << "Pick a data type to start!" << std::endl;
		std::cout << "1. Numbers." << std::endl;
		std::cout << "To exit, type any non numeric character and press enter!" << std::endl;
		std::cout << "Your selection: " << std::endl;
		std::cin >> userSelection;

		// Control Flow using if->else
		if(userSelection == 1){
			userSelection = -1;
			float num1, num2, result;
			std::cout << "Please enter number 1: " << std::endl;
			std::cin >> num1;
			std::cout << "Please enter number 2: " << std::endl;
			std::cin >> num2;
			std::cout << "What would you like me to do with the numbers?" << std::endl;
			std::cout << "1. Add." << std::endl << "2. Subtract." << std::endl << "3. Multiply." << std::endl << "4. Divide" << std::endl;
			std::cin >> userSelection;
			// Control flow using switch-case
			switch(userSelection){
				case 1:
					result = num1 + num2;
					std::cout << num1 << " + " << num2 << " = " << result << std::endl;
					break;
				case 2:
					result = num1 - num2;
					std::cout << num1 << " - " << num2 << " = " << result << std::endl;
					break;
				case 3:
					result = num1 * num2;
					std::cout << num1 << " * " << num2 << " = " << result << std::endl;
					break;
				case 4:
					result = num1 / num2;
					std::cout << num1 << " / " << num2 << " = " << result << std::endl;
					break;
				default:
					std::cout << "Invalid input. I'm out!";
					return -1;
					break;
			}
		} else{
			std::cout << "You typed a non numeric character, so it is Bye from my end!" << std::endl;
		}
		// using conditional operators
		float num;
		std::cout << "Using conditional operators '?' & ':' " << std::endl;
		std::cout << "Enter a number: " << std::endl;
		std::cin >> num;
		std::string result = num > 10 ? "Yes" : "No";
		std::cout << num << " is greater than 10? " << result << std::endl;
		result = num < 10 ? "Yes" : "No";
		std::cout << num << " is less than 10? " << result << std::endl;
		result = num == 10 ? "Yes" : "No";
		std::cout << num << " is equal to 10? " << result << std::endl;
	}
	return 0;
}

