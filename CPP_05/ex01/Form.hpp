#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form{

	public:
		Form(std::string name, int grade_to_sign, int grade_to_execute);
		Form(Form &	src);
		Form & operator=(Form &	src);
		std::string	getName() const;
		int getToSign()	const;
		int getToExecute()	const;
		void beSigned(Bureaucrat & bureaucrat);
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
};

std::ostream & operator<<(std::ostream & o, const Form & form);
#endif
