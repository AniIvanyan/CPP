#include "robotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm  Constructor called" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other): Form(other), target(other.getTarget())
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
}

const std::string& RobotomyRequestForm::getTarget(void) const
{
	return target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	checking_executor(executor);
	std::cout << "Drrrrrrr ";;
	static int robotomized = 1;
	if (robotomized % 2 == 0)
		std::cout << getTarget() << " has been robotomized successfully " << std::endl;
	else
		std::cout << getTarget() << "  failed the robotomy" << std::endl;
	robotomized++;
}