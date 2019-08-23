/*
String Library
created by: Tarique Ali Mirza <tarique1988@gmail.com>
date: 23rd August 2019
*/
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
	// initializing a string
	string name = "My Name"; // direct initialization
	string repetition (10, 'a'); // direct initialization
	string newRepetition = string(5, 'd'); // copy initialization
	
	// Reading a string
	string input;
	cout << "Enter the first input string: " << endl;
	cin >> input;
	cin.clear();
	cin.ignore();
	
	// Reading a string of unknown length
	cout << "Enter a series of strings (press ctrl+z and enter when done): " << endl;
	string temp, longString;
	while(cin >> temp){ // discards all the whitespaces
		longString += temp;
	}
	
	// Reading input string with white spaces untill end of line with getline()
	string line;
	cout << "Please enter a sentence." << endl;
	cin.ignore();
	cin.clear();
	getline(cin, line);
	
	// Writing a string
	cout << "Name: " << name << endl;
	cout << "Repeat character 'a' ten times: " << repetition << endl;
	cout << "Repeat character 'd' five times with copy initialization: " << newRepetition << endl;
	cout << "The first input string was: " << input << endl;
	cout << "Series of string: " << longString << endl; // without whitespace!
	cout << "The sentence entered by user: " << line << endl; // with whitespace!
	
	// checking if a string is empty
	string newStr1 = "", newStr2;
	if(newStr1.empty()){
		cout << "First string is Empty!" << endl; // will execute because string newStr1 is empty
	} else{
		cout << "First string is not Empty!" << endl; // wont execute
	}
	
	// getting the size of a string
	cout << "Please input a sentence!" << endl;
	getline(cin, newStr2);
	cout << "The number of characters in the sentence '" << newStr2 << "' = " << newStr2.size() << endl; // counts whitespaces too!
	
	// iterating over each character of a string using for range loop
	string str = "I am a new string and I would love to be iterated upon!";
	cout << "Original string: " << str << endl;
	for(auto &c : str){
		if(c != '\0' && c != ' '){ // skip end of string and whitespace characters
			c = toupper(c);
		}
	}
	cout << "After changing each character of the string to uppercase: " << str << endl;
	system("CLS");
	string::size_type digit;
	string hexDigits = "0123456789ABCDEF";
	cout << "Enter a number to get it's last Hexadecimal digit" << endl;
	while(cin >> digit){
		cout << hexDigits[digit%16] << endl;
	}
	return 0;
}

