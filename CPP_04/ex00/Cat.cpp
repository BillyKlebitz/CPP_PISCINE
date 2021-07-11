#include "Cat.hpp"

Cat::Cat() : Animal() {

	this->type = "Cat";
}


void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
