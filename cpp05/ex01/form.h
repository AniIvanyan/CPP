#pragma once
#include "bureaucrat.h"
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int exeGrade;
	Form();
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const noexcept;
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const noexcept;
	};
	int validateGrade(const int grade) const;

public:
	Form(const std::string &name, const int signGrade, const int exeGrade);
	Form(const Form &fm);
	Form &operator=(const Form &rhs);
	~Form();
	const std::string &getName(void) const;
	bool getIsSigned(void) const;
	int getSignGrade(void) const;
	int getExeGrade(void) const;
	void beSigned(const Bureaucrat &bc);
};

std::ostream &operator<<(std::ostream &output, const Form &fm);