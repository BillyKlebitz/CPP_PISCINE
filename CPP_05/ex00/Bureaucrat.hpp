#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {//NEEDS OTRHODOX

	public:
		std::string getName() const;
		Bureaucrat(std::string name, int grade);
		void	incrementGrade();
		void	decrementGrade();
		int	getGrade() const;
		std::ostream & operator<<(std::ostream & o);
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

#endif
