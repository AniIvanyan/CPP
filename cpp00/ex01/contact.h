#pragma once
#include <string>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string secret;
	public:
		//constructor
		Contact();
		Contact(std::string& firstName, std::string& lastName, std::string& nickName, std::string& phoneNumber, std::string& secret);
		//getters
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getSecret() const;
		//setters
		void setFirstName(const std::string& firstName);
		void setLastName(const std::string& lastName);
		void setNickName(const std::string& nickName);
		void setPhoneNumber(const std::string& phoneNumber);
		void setSecret(const std::string& secret);
		// display
		void displayContact() const;
};