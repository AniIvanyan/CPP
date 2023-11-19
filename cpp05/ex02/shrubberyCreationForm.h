#pragma once
#include "form.h"
#include <fstream>


class ShrubberyCreationForm : public Form
{
private:
	const std::string target;
	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& other);
	using Form::operator=;
	const std::string& getTarget(void) const;
	virtual void execute(Bureaucrat const &executor) const override;
};