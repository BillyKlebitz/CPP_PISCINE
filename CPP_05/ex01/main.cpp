#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	try{
		Bureaucrat bob("Bob",150);
		Form 	  form("spravka", 100, 125);
		//bob.decrementGrade();
		bob.incrementGrade();
		std::cout << bob << std::endl;
		std::cout << form << std::endl;
		bob.signForm(form);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

