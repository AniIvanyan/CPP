#include "shrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
	std::cout << "Constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other), target(other.getTarget())
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
}

const std::string &ShrubberyCreationForm::getTarget(void) const
{
	return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	checking_executor(executor);
	std::ofstream asciiTree;
	asciiTree.open(getTarget() + "_shrubbery");
	if (!asciiTree.is_open())
		std::cerr << "Error opening the output file." << std::endl;

	asciiTree << "        _-_" << std::endl;
	asciiTree << "      /~~~~\\" << std::endl;
	asciiTree << "    /~~    ~~\\" << std::endl;
	asciiTree << "   {          }" << std::endl;
	asciiTree << "    \\ _- -_ /" << std::endl;
	asciiTree << "    ~ \\\\ //  ~" << std::endl;
	asciiTree << " _- -  | | _-_" << std::endl;
	asciiTree << "   _-  | |   -_" << std::endl;
	asciiTree << "      // \\\\" << std::endl;
	asciiTree.close();
}