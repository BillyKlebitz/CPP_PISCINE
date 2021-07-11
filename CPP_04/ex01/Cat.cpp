#include "Cat.hpp"

Cat::Cat() : Animal() {

	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat & Cat::operator=(const Cat &src){
	this->type = src.type;
	this->brain = src.brain;
	return (*this);
}

Cat::Cat(Cat & src){

	this->type = src.type;
	this->brain = src.brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}


Cat::~Cat() {
	
	delete this->brain;
	std::cout << "Cat destroyed" << std::endl;
}
