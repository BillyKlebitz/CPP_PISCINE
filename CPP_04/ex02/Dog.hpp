#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: virtual public Animal{
	
	public:
		Dog();		
		~Dog();
		virtual void makeSound() const;		
		virtual void	setIdeas(std::string idea);
		virtual std::string*	getIdeas() const;
	private:
		Brain*	brain;
};

#endif
