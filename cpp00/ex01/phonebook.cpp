#include "phonebook.h"
#include "contact.h"
#include <iostream>
#include <iomanip>

int PhoneBook::numContacts = -1;

void PhoneBook::displayPhonebook() const {

	for (int i = 0; i <= numContacts; i++)
	{
		std::cout << std::right << "|" << std::setw(10) << i;
		contacts[i].displayContact();
	}
}
bool PhoneBook::isValidPhoneNumber(const std::string& phoneNumber) {
	if (phoneNumber.length() != 9)
		return false;
	for (char c: phoneNumber)
	{
		if (!std::isdigit(c))
			return false;
	}
	return true;
}

void PhoneBook::addContact() {

		if (numContacts >= 7)
		{
			std::cout << "Phone book is full. Need to replace the oldest contact." << std::endl;
			numContacts--;
		}

		std::string firstName, lastName, nickName, phoneNumber, secret;
		bool isValid = false;

		std::cout << "Enter first name: ";
		std::getline(std::cin, firstName);

		std::cout << "Enter last name: ";
		std::getline(std::cin, lastName);

		std::cout << "Enter nickname: ";
		std::getline(std::cin, nickName);

		while (!isValid)
		{
			std::cout << "Enter phone number: ";
			std::getline(std::cin, phoneNumber);
			if (isValidPhoneNumber(phoneNumber))
				isValid = true;
			else
				std::cout << "Invalid phone number. Try again." << std::endl;
		}

		std::cout << "Enter the darkest secret about this contact: ";
		std::getline(std::cin, secret);
		contacts[++numContacts] = Contact(firstName, lastName, nickName, phoneNumber, secret);
}

void PhoneBook::searchContact(int index) const {
	if (index < 0 || index > numContacts)
		std::cout << "Contact with that index is not found." << std::endl;
	else
	{
		std::cout << std::right << std::setw(10) << "| " << index;
		contacts[index].displayContact();
	}
}

void PhoneBook::exitProgram() const {
	exit(0); // default constructors will be called by the compiler.
}