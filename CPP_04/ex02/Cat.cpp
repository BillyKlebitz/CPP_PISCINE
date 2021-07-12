#include "Cat.hpp"

Cat::Cat() : Animal() {

	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat created" << std::endl;
}

Cat & Cat::operator=(const Cat &src){
	this->type = src.type;
	delete this->brain;
	this->brain = new Brain;
	*this->brain = *src.brain;
	return (*this);
}

Cat::Cat(Cat & src){
	*this = src;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}


Cat::~Cat() {
	
	delete this->brain;
	std::cout << "Cat destroyed" << std::endl;
}


void	Cat::setIdeas(std::string idea){
	this->brain->setIdeas(idea);
}

std::string*	Cat::getIdeas() const{

	return this->brain->getIdeas();
}
