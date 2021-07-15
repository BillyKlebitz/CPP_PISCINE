#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	try{
		Form *Jack = new ShrubberyCreationForm("Jack");
		Form *Robot = new RobotomyRequestForm("Jack");
		Form *President = new PresidentialPardonForm("Jack");
		Bureaucrat lol("lol",1);
		lol.signForm(*Jack);
		lol.signForm(*Robot);
		lol.signForm(*President);
		Jack->execute(lol);
		Robot->execute(lol);
		President->execute(lol);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

