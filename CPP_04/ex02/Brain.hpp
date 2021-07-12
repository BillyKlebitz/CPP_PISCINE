#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#define IDEAS_CAPACITY 100

class Brain	{

	public:
		Brain();
		Brain(Brain & src);
		virtual ~Brain();
		std::string*	getIdeas() ;
		void	setIdeas(std::string idea);
		Brain & operator=(const Brain & src);

	private:
		std::string	ideas[IDEAS_CAPACITY];
};

#endif
