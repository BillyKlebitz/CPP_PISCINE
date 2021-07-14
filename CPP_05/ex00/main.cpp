#include "Bureaucrat.hpp"

int main(){

	Bureaucrat bob("Bob",150);
	//bob.decrementGrade();
	bob.incrementGrade();
	std::cout << bob << std::endl;
}

