#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog: virtual public Animal{
	
	public:
		Dog();		
		virtual void makeSound() const;		
};

#endif
