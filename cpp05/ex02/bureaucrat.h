#pragma once
#include <iostream>
#include <string>
#include <exception>
#include "form.h"
#define MAX_G 1
#define MIN_G 150

class Form;

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	Bureaucrat();
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const noexcept;
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const noexcept;
	};

public:
	~Bureaucrat();
	Bureaucrat(const std::string &name, int age);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	const std::string &getName(void) const;
	int getGrade(void) const;
	void setGrade(int grade);
	void incrementGrade(void);
	void decrementGrade(void);
	void signForm(Form &fm);
	void executeForm(Form const &form) const;
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &bc);
