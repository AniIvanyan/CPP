#include "phonebook.h"
#include <iostream>
#include <string>
#include <limits>

int main(int argc, char **argv) {
	(void)argv;
	if (argc > 1)
	{
		std::cout << "Something is wrong, prompt should be empty." << std::endl;
		return (1);
	}

	PhoneBook phoneBook;

	std::cout << "You are welcomed to create your own phonebook\n" << "Commands you can use: ADD, SEARCH, EXIT" << std::endl;

	while (true)
	{
		std::string command;
		std::cout << "Please enter the command: ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
		{
			phoneBook.displayPhonebook();
			try {
				int index;
				std::cout << "Enter the index of your prefered contact: ";
				std::cin >> index;
				if (std::cin.fail()) {
            		throw std::invalid_argument("Invalid input. Please enter a valid integer.");
        		}
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				phoneBook.searchContact(index);
			}
			catch (const std::exception& e) {
				std::cin.clear(); 
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << e.what() << std::endl;
    		}
		}
		else if (command == "EXIT")
			phoneBook.exitProgram();
		else
			std::cout << "Invalid command input. Try again." << std::endl;
	}
	return 0;
}