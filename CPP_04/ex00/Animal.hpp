#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{

	public:
		Animal();
		Animal(Animal & src);
		virtual ~Animal();
		Animal & operator=(const Animal & src);
		void const 	makeSound();
		std::string const	getType();
	protected:
		std::string type;
};

#endif
