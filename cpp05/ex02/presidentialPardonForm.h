#pragma once
#include "form.h"

class PresidentialPardonForm : public Form
{
private:
	const std::string target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	using Form::operator=;
	const std::string& getTarget(void) const;
	virtual void execute(Bureaucrat const &executor) const override;
};