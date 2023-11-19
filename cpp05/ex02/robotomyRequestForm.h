#pragma once
#include "form.h"

class RobotomyRequestForm : public Form
{
private:
	const std::string target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	using Form::operator=;
	const std::string& getTarget(void) const;
	virtual void execute(Bureaucrat const &executor) const override;
};