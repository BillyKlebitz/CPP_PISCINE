#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat {

	public:
		std::string getName() const;
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat & src);
		Bureaucrat & operator=(Bureaucrat & src);
		~Bureaucrat(){};
		void	signForm(Form & form);
		void	incrementGrade();
		void	decrementGrade();
		int		getGrade() const;
		class GradeTooHighException : public std::exception{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too high for current Bureaucrat.");
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade is too low for current Bureaucrat.");
				}
		};
	private:
		std::string const name;
		int	grade;

};

std::ostream & operator<<(std::ostream & o, const Bureaucrat &bureaucrat);
#endif
