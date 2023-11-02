#pragma once
#include "contact.h"

class PhoneBook
{
private:
	Contact contacts[8];
	static int numContacts;

public:
	void displayPhonebook() const;
	void addContact();
	void searchContact(int index) const;
	void exitProgram() const;
	bool isValidPhoneNumber(const std::string &phoneNumber);
};
