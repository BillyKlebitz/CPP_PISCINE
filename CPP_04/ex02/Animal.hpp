#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{

	public:
		Animal();
		virtual ~Animal();
		Animal & operator=(const Animal & src);
		Animal(Animal & src);
		virtual void 	makeSound() const = 0;
		std::string getType() const;
	protected:
		std::string type;
};

#endif
