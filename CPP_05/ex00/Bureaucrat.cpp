 #include "Bureaucrat.hpp"

Bureaucrat & Bureaucrat::operator=(Bureaucrat & src){
	
	this->grade = src.grade;
	return *this;
}


Bureaucrat::Bureaucrat(Bureaucrat & src) : name(src.name){
	
	*this = src;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{

	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = grade;
}

std::string	Bureaucrat::getName() const{

	return this->name;
}

int	Bureaucrat::getGrade() const {

	return this->grade;
}

void Bureaucrat::incrementGrade(){

	if (grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrementGrade(){

	if (grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}


std::ostream & operator<<(std::ostream & o, const Bureaucrat &bureaucrat){

	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}
