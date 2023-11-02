#pragma once
#include "contact.h"

class PhoneBook {
	private:
		Contact contacts[8];
		int numContacts;
	public:
		//constructor
		PhoneBook();

		void addContact();
		void searchContact() const;
		void exitProgram() const;
};