#include "Bureaucrat.hpp"

int main(){

	try{
		Bureaucrat bob("Bob",150);
		bob.decrementGrade();
		//bob.incrementGrade();
		std::cout << bob << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

