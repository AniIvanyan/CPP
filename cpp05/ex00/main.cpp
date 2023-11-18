#include "bureaucrat.h"

int main()
{
	try{
		Bureaucrat buro("Buro", 2);
		std:: cout << buro << std::endl;
		buro.incrementGrade();
		std:: cout << buro << std::endl;
		buro.setGrade(150);
		std:: cout << buro << std::endl;
		buro.decrementGrade();
		std:: cout << buro << std::endl;
		//should not reach this part
		buro.incrementGrade();
		std:: cout << buro << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}