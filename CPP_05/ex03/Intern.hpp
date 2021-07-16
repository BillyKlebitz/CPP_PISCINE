#include "Form.hpp"

class Intern {

	typedef Form*(Intern::*form_types)(std::string);
	public:
		Form	*makeForm(std::string name, std::string target);
		Intern();
		Intern(Intern & src);
		Intern & operator=(Intern & src);
		int	calcWhichForm(std::string name);
		Form	*createShrubbery(std::string target);
		Form	*createRobotomic(std::string target);
		Form	*createPresidental(std::string target);
		~Intern(){};
	private:
	form_types forms[4];
};
