#include <iostream>
#include "contact.h"

Contact::Contact(std::string& firstName, std::string& lastName, std::string& nickName, std::string& phoneNumber, std::string& secret)
	: firstName(firstName), lastName(lastName), nickName(nickName), phoneNumber(phoneNumber), secret(secret){}

std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getLastName() const {
	return lastName;
}

std::string Contact::getNickName() const {
	return nickName;
}

std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}

std::string Contact::getSecret() const {
	return secret;
}

void Contact::setFirstName(const std::string& firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(const std::string& lastName){
	this->lastName = lastName;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setSecret(const std::string& secret)
{
	this->secret = secret;
}

void Contact::displayContact() const {
	
}