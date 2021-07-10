#include "Animal.hpp"

Animal::Animal(){
	std::cout << " Animal created " << std::endl;
}

Animal & Animal::operator=(const Animal &src){
	this->type = src.type;
	return (*this);
}

Animal::Animal(Animal & src){

	this->type = src.type;
}

void const	Animal::makeSound()
{
	//if (!this->type)
	//	std::cout << " * * * " << std::endl;
	if (this->type == "Cat")
		std::cout << "Meow" << std::endl;
}

std::string const Animal::getType(){

	return this->type;
}
