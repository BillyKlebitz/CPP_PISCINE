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

void	Dog::setIdeas(std::string idea){
	this->brain->setIdeas(idea);
}

std::string*	Dog::getIdeas() const{

	return this->brain->getIdeas();
}
