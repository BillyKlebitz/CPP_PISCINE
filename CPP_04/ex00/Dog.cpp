#include "Dog.hpp"

Dog::Dog() : Animal() {

	this->type = "Dog";
}


void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
