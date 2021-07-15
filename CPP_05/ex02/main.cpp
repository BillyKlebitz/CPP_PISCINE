#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	try{
		Form *Jack = new ShrubberyCreationForm("Jack");
		Bureaucrat lol("lol",1);
		Jack->execute(lol);
	}
	catch(std::exception & e)
	{
	}
}

