#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include <random>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

class Bureaucrat;
class Form{

	public:
						Form(std::string name, int grade_to_sign, int grade_to_execute);
						Form(Form &	src);
		Form & 			operator=(Form &	src);
		std::string		getName() const;
		int				getToSign()	const;
		int				getToExecute()	const;
		void 			beSigned(Bureaucrat & bureaucrat);
		void			setTarget(std::string target);
		std::string		getTarget(void) const;
		virtual	void 	execute(Bureaucrat const & executor) const=0;
		bool			checkForm(Bureaucrat const & executor) const;
		bool			getIsSigned() const;
						~Form(){};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too low for current Bureaucrat.");
				}
			};
	private:
		std::string const	name;
		bool				is_signed;
		int const			grade_to_sign;
		int	const			grade_to_execute;
		std::string			target;
};

std::ostream & operator<<(std::ostream & o, const Form & form);

class ShrubberyCreationForm: virtual public Form{
	public:
		ShrubberyCreationForm(std::string target);
		void execute(Bureaucrat const & executor) const;
};

class RobotomyRequestForm : virtual public Form{

	public:
		RobotomyRequestForm(std::string target);
		void execute(Bureaucrat const & executor) const;
};

class PresidentialPardonForm: virtual public Form{

	public:
		PresidentialPardonForm(std::string target);
		void execute(Bureaucrat const & executor) const;
};

#endif
