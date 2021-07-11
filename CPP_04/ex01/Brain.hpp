#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain	{

	public:
		Brain();
		Brain(Brain & src);
		virtual ~Brain();
		Brain & operator=(const Brain & src);

	private:
		std::string	ideas[100];
};

#endif
