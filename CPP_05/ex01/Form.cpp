#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute){
	this->is_signed = 0;
}

Form::Form(Form &	src): name(src.name), grade_to_sign(src.grade_to_sign), grade_to_execute(src.grade_to_execute){

	this->is_signed = src.is_signed;
}

Form & Form::operator=(Form &	src){
	
	this->is_signed = src.is_signed;
	return *this;
}

std::string	Form::getName() const{

	return this->name;
}

void Form::beSigned(Bureaucrat & bureaucrat){

	if (bureaucrat.getGrade() <= this->grade_to_sign)
		this->is_signed = 1;
	else
		throw Form::GradeTooLowException();
}

int	Form::getToSign() const{

	return this->grade_to_sign;
}

int	Form::getToExecute() const{
	
	return this->grade_to_execute;
}

std::ostream & operator<<(std::ostream & o, const Form & form){

	o << "Form " << form.getName() <<  " requires minimum grade of " << form.getToSign() << " to be signed and " << form.getToExecute() << " to be executed"; 
	return o;
}
