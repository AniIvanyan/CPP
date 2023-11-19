#include "presidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm  Constructor called" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other): Form(other), target(other.getTarget())
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
}

const std::string& PresidentialPardonForm::getTarget(void) const
{
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	checking_executor(executor);
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
