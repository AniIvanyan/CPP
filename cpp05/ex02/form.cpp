#include "form.h"

const char *Form::GradeTooHighException::what() const noexcept
{
	return "Grade is higher than the maximum possible one";
}

const char *Form::GradeTooLowException::what() const noexcept
{
	return "Grade is lower than the minimum possible one";
}

const char *Form::UnsignedException::what() const noexcept
{
	return "Form is not signed";
}

int Form::validateGrade(const int grade) const
{
	if (grade < MAX_G)
		throw GradeTooHighException();
	if (grade > MIN_G)
		throw GradeTooLowException();
	return grade;
}

Form::Form() : isSigned(false), signGrade(150), exeGrade(1)
{
	std::cout << "Form Default Constructor called" << std::endl;
}

Form::Form(const std::string &name, const int signGrade, const int exeGrade) : name(name), isSigned(false), signGrade(validateGrade(signGrade)), exeGrade(validateGrade(exeGrade))
{
	std::cout << "Form Constructor called" << std::endl;
}

Form::Form(const Form &other) : name(other.getName()), isSigned(other.getIsSigned()), signGrade(other.getSignGrade()), exeGrade(other.getExeGrade())
{
	std::cout << "Form Copy Constructor called" << std::endl;
}

Form &Form::operator=(const Form &rhs)
{
	std::cout << "Form Copy assignment called" << std::endl;
	if (this == &rhs)
		return *this;
	this->isSigned = rhs.getIsSigned();
	return *this;
}

Form::~Form()
{
	std::cout << "Form Destructor called" << std::endl;
}

const std::string &Form::getName(void) const
{
	return name;
}
bool Form::getIsSigned(void) const
{
	return isSigned;
}
int Form::getSignGrade(void) const
{
	return signGrade;
}
int Form::getExeGrade(void) const
{
	return exeGrade;
}

void Form::beSigned(const Bureaucrat &bc)
{
	if (bc.getGrade() <= getSignGrade())
		isSigned = true;
	else
		throw GradeTooLowException();
}

std::ostream &operator<<(std::ostream &output, const Form &fm)
{
	output << fm.getName() << ", form required signed grade is " << fm.getSignGrade();
	return output;
}

void Form::checking_executor(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw UnsignedException();
	if (executor.getGrade() > this->getExeGrade())
		throw GradeTooLowException();
}