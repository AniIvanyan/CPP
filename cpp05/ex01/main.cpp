#include "bureaucrat.h"

int main()
{
	Bureaucrat buro("Buro", 23);
	std:: cout << buro << std::endl;
	Bureaucrat noBuro("NoBuro", 33);
	std:: cout << noBuro << std::endl;
	Form fm1("Rules and Regulations", 30, 22);
	try
	{
		fm1.beSigned(buro);
		fm1.beSigned(noBuro);
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	buro.signForm(fm1);
	noBuro.signForm(fm1);
}