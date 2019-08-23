/*
	Using pre-defined variable types and performing various operations on them
	created by: Tarique Ali Mirza <tarique1988@gmail.com>
	date: 23rd August 2019
*/
#include <iostream>

int main() {
	
	// initialize two integers and a result;
	int iNum1;
	int iNum2;
	int iResult;
	
	// Add two integer numbers
	std::cout << "Operation - Add two integer numbers!" << std::endl;
	std::cout << "Enter the value of the first number: " << std::endl;
	std::cin >> iNum1;
	std::cout << "Enter the value of the second number: " << std::endl;
	std::cin >> iNum2;
	iResult = iNum1 + iNum2;
	std::cout << "The result of " << iNum1 << " + " << iNum2 << " = " << iResult << std::endl;
	
	// Subtract two integer numbers
	std::cout << "Operation - Subtract two integer numbers!" << std::endl;
	std::cout << "Enter the value of the first number: " << std::endl;
	std::cin >> iNum1;
	std::cout << "Enter the value of the second number: " << std::endl;
	std::cin >> iNum2;
	iResult = iNum1 - iNum2;
	std::cout << "The result of " << iNum1 << " - " << iNum2 << " = " << iResult << std::endl;
	
	// Multiply two integer numbers
	std::cout << "Operation - Multiply two integer numbers!" << std::endl;
	std::cout << "Enter the value of the first number: " << std::endl;
	std::cin >> iNum1;
	std::cout << "Enter the value of the second number: " << std::endl;
	std::cin >> iNum2;
	iResult = iNum1 * iNum2;
	std::cout << "The result of " << iNum1 << " * " << iNum2 << " = " << iResult << std::endl;
	
	// Divide two integer numbers
	std::cout << "Operation - Divide two integer numbers!" << std::endl;
	std::cout << "Enter the value of the first number: " << std::endl;
	std::cin >> iNum1;
	std::cout << "Enter the value of the second number: " << std::endl;
	std::cin >> iNum2;
	iResult = iNum1 / iNum2;
	std::cout << "The result of " << iNum1 << " / " << iNum2 << " = " << iResult << std::endl;
	
	// Initialize two floating point numbers and a variable result
	float fNum1;
	float fNum2;
	float fResult;
	
	// Add two floating point numbers
	std::cout << "Operation - Add two floating point numbers!" << std::endl;
	std::cout << "Enter the value of the first number: " << std::endl;
	std::cin >> fNum1;
	std::cout << "Enter the value of the second number: " << std::endl;
	std::cin >> fNum2;
	fResult = fNum1 + fNum2;
	std::cout << "The result of " << fNum1 << " + " << fNum2 << " = " << fResult << std::endl;

	// Subtract two floating point numbers
	std::cout << "Operation - Subtract two floating point numbers!" << std::endl;
	std::cout << "Enter the value of the first number: " << std::endl;
	std::cin >> fNum1;
	std::cout << "Enter the value of the second number: " << std::endl;
	std::cin >> fNum2;
	fResult = fNum1 - fNum2;
	std::cout << "The result of " << fNum1 << " - " << fNum2 << " = " << fResult << std::endl;

	// Multiply two floating point numbers
	std::cout << "Operation - Multiply two floating point numbers!" << std::endl;
	std::cout << "Enter the value of the first number: " << std::endl;
	std::cin >> fNum1;
	std::cout << "Enter the value of the second number: " << std::endl;
	std::cin >> fNum2;
	fResult = fNum1 * fNum2;
	std::cout << "The result of " << fNum1 << " * " << fNum2 << " = " << fResult << std::endl;

	// Divide two floating point numbers
	std::cout << "Operation - Divide two floating point numbers!" << std::endl;
	std::cout << "Enter the value of the first number: " << std::endl;
	std::cin >> fNum1;
	std::cout << "Enter the value of the second number: " << std::endl;
	std::cin >> fNum2;
	fResult = fNum1 / fNum2;
	std::cout << "The result of " << fNum1 << " / " << fNum2 << " = " << fResult << std::endl;
	
	return 0;
}
