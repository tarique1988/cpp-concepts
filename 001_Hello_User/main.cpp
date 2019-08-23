/*
Ask the user's name and say hello to the user!
created by: Tarique Ali Mirza <tarique1988@gmail.com
date: 23rd August 2019
*/
#include <iostream>

int main() {
	std::string username;
	std::cout << "What is your name?" << std::endl;
	std::cin >> username;
	std::cout << "Hello, " << username << "!" << std::endl;
	return 0;
}
