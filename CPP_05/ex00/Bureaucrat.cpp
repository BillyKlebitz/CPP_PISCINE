 #include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade)
{
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		if (grade < 1)
			throw Bureaucrat::GradeTooLowException();
		std::cout << name;
		this->grade = grade;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}


void Bureaucrat::incrementGrade(){


}
