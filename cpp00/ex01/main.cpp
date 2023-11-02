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
			int index;
			std::cout << "Enter the index of your prefered contact: ";
			// could be better to do exception handling if not int
			std::cin >> index;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			phoneBook.searchContact(index);
		}
		else if (command == "EXIT")
			phoneBook.exitProgram();
		else
			std::cout << "Invalid command input. Try again." << std::endl;
	}
	return 0;
}