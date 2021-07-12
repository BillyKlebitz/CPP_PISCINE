#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: virtual public Animal{
	
	public:
		Cat();
		Cat & operator=(const Cat & src);
		Cat(Cat & src);
		~Cat();
		virtual void makeSound() const;		
		virtual void	setIdeas(std::string idea);
		virtual std::string*	getIdeas() const;
	private:
		Brain*	brain;
};

#endif
