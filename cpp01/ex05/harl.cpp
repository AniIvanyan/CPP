#include "harl.h"
#include <iostream>
#include <map>

void Harl::debug(void)
{
	std::cout << "Harl's debug message" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Harl's info message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Harl's warning message" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Harl's error message" << std::endl;
}

void Harl::complain(std::string level)
{
	std::map<std::string, void (Harl::*)()> harlMap = {
		{"debug", &Harl::debug},
		{"info", &Harl::info},
		{"warning", &Harl::warning},
		{"error", &Harl::error}};

	auto it = harlMap.find(level);
	if (it != harlMap.end())
		(this->*(it->second))();
	else
		std::cout << "Harl does not have message for " + level + " level" << std::endl;
}