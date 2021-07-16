 #include "Bureaucrat.hpp"

Bureaucrat & Bureaucrat::operator=(Bureaucrat & src){
	
	this->grade = src.grade;
	return *this;
}


Bureaucrat::Bureaucrat(Bureaucrat & src) : name(src.name){
	
	*this = src;
}

void	Bureaucrat::signForm(Form & form){

	if (this->grade > form.getToSign())
		std::cout 
			<< this->name << " cannot sign " 
			<< form.getName() 
			<< " because his grade is too low" 
			<< std::endl;
	else
	{
		form.beSigned(*this);
		std::cout 
			<< this->name << " signs " 
			<< form.getName()
			<< std::endl;	
	}
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
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

void	Bureaucrat::executeForm(Form const & form){
	
	if (form.getIsSigned() != 1)
		std::cout 
			<< this->name << " cannot execute " 
			<< form.getName() 
			<< " because it is not signed yet" 
			<< std::endl;
	else if (this->grade > form.getToExecute())
		std::cout 
			<< this->name << " cannot execute " 
			<< form.getName() 
			<< " because his grade is too low" 
			<< std::endl;
	else
	{
		form.execute(*this);
		std::cout 
			<< this->name << " executes " 
			<< form.getName()
			<< std::endl;	
	}
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat &bureaucrat){

	o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return o;
}
