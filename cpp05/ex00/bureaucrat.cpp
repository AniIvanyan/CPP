#include "bureaucrat.h"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name(name)
{
	std::cout << "Constructor called" << std::endl;
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.getName())
{
	std::cout << "Copy Constructor called" << std::endl;
	setGrade(other.getGrade());
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	std::cout << "Copy assignment called" << std::endl;
	if(this == &rhs)
		return *this;
	this->grade = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat(){	std::cout << "Destructor called" << std::endl;}

void Bureaucrat::incrementGrade(void)
{
	if (grade - 1 < MAX_G)
		throw GradeTooHighException(); 
	grade--;
}

void Bureaucrat::decrementGrade(void)
{
	if (grade + 1 > MIN_G)
		throw GradeTooLowException(); 
	grade++;
}

const std::string &Bureaucrat::getName(void) const
{
	return name;
}

int Bureaucrat::getGrade(void) const
{
	return grade;
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < MAX_G)
		throw GradeTooHighException();
	if (grade > MIN_G)
		throw GradeTooLowException();
	this->grade = grade;
}

std::ostream& operator<<(std::ostream &output, const Bureaucrat &bc)
{
	output << bc.getName() << ", bureaucrat grade " << bc.getGrade();
	return output;
}

const char* Bureaucrat::GradeTooHighException::what() const noexcept
{
	return "Grade is higher than the maximum possible one";
}

const char* Bureaucrat::GradeTooLowException::what() const noexcept
{
	return "Grade is lower than the minimum possible one";
}