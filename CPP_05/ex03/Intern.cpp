#include "Intern.hpp"


Intern::Intern(){
	
	forms[0] = &Intern::createShrubbery;
	forms[1] = &Intern::createRobotomic;
	forms[2] = &Intern::createPresidental;
}

Intern::Intern(Intern & src){
	
	this->forms[0] = src.forms[0];
	this->forms[1] = src.forms[1];
	this->forms[2] = src.forms[2];
}

Intern & Intern::operator=(Intern & src){

	this->forms[0] = src.forms[0];
	this->forms[1] = src.forms[1];
	this->forms[2] = src.forms[2];
	return	*this;
}

int	Intern::calcWhichForm(std::string name)
{
	return	(name == "shrubbery creation") * 1 +
				(name == "robotomy request") * 2 +
					(name == "presidental pardon") * 3 - 1;
}

Form	*Intern::createShrubbery(std::string target){

	std::cout << "Intern creates shrubbery creation form" << std::endl; 
	return new ShrubberyCreationForm(target);
}
Form	*Intern::createRobotomic(std::string target){

	std::cout << "Intern creates robotomy request form" << std::endl; 
	return new RobotomyRequestForm(target);
}
Form	*Intern::createPresidental(std::string target){

	std::cout << "Intern creates presidetal pardon form" << std::endl; 
	return new PresidentialPardonForm(target);
}

Form	*Intern::makeForm(std::string name, std::string target){


	int i = calcWhichForm(name);
	if (i > -1 && i < 3)
		return (this->*forms[i])(target);
	std::cout <<  "No such form" << std::endl;
	return 0;
}

