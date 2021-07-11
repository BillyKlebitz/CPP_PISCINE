#include "Dog.hpp"

Dog::Dog() : Animal() {
	
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog created" << std::endl;
}


void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Dog::~Dog() {

	delete this->brain;
	std::cout << "Dog destroyed" << std::endl;
}
