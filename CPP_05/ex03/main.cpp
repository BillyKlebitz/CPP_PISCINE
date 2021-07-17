#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(){

	try{
		Intern Bob;		
		//Bob.makeForm("shrubbery creation", "bender");
		Bob.makeForm("0shfrepogjreprubbery creation", "bender");
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

