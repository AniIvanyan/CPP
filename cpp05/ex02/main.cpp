#include "bureaucrat.h"
#include "shrubberyCreationForm.h"
#include "robotomyRequestForm.h"
#include "presidentialPardonForm.h"

int main( void )
{

    try {
        Bureaucrat bureaucrat("Buro", 55);
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        bureaucrat.signForm(form1);
        bureaucrat.executeForm(form1);
        bureaucrat.signForm(form2);
        bureaucrat.executeForm(form2);
        bureaucrat.signForm(form3);
        bureaucrat.executeForm(form3);
		
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}