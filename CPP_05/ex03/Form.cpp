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

void	Form::setTarget(std::string target){

	this->target = target;
}

bool	Form::checkForm(Bureaucrat const & executor) const{

	if (this->is_signed == 1 && executor.getGrade() <= this->grade_to_execute)
		return 1;
	return 0;
}

std::string	Form::getTarget(void) const{

	return this->target;
}

bool	Form::getIsSigned() const{

	return this->is_signed;

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm",72,45) {
	this->setTarget(target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{

	if(!this->checkForm(executor))
		return;
	srand((unsigned)time(NULL));
	std::cout << "BRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR..." <<  std::endl;
	if (rand() % 2)
		std::cout << this->getTarget() <<" has been robotomized successfully" << std::endl;
	else
		std::cout << "Fuck... Didn`t work, next time" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm",25,5) {
	this->setTarget(target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{

	if(!this->checkForm(executor))
		return;
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblerox" << std::endl;
}
