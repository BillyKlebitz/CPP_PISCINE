#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat: virtual public Animal{
	
	public:
		Cat();
		virtual void makeSound() const;		
};

#endif
