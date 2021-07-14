 #include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		this->grade = grade;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName() const{

	return this->name;
}

int	Bureaucrat::getGrade() const {

	return this->grade;
}

void Bureaucrat::incrementGrade(){

	try{
		this->grade--;
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade(){

	try{
	this->grade++;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


std::ostream & operator<<(std::ostream & o, const Bureaucrat &bureaucrat){

	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}
