#pragma once
#include <string>
#include <iostream>
#define SIZE 100

class Brain
{
private:
	std::string ideas[SIZE];
public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
};