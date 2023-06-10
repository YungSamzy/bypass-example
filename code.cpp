/*
*  To Bypass:
*   Addresses:
	0x00007FF71F198427: 74 -> EB // actual patch
	0x00007FF71F198428: 15 -> 00 // no op to save bytes
*
*/

#include <iostream> // C++ Standard Library Version 20

int main() // I hope you know what a main function is...
{
	while (true) 
	{
		system("cls"); // Clears console for when we loop back here
		std::string input{}; // Define string input
		std::cout << "Input: "; // Write text to console
		std::cin >> input; // Copy user input into string input
		if (input == "1234") // Does a literal comparison between the text stored in the string input and the constant char array 1234
		{
			std::cout << "\nYou are correct!\n"; // Write text to console
		}
		else
		{
			std::cout << "\nYou are incorrect!\n"; // Write text to console
		}
		std::cin.ignore(); // Ignores one character of input because the user has to hit enter to input
		std::cin.get(); // waits for user to hit enter
		// goes back to line 7
	}
}
