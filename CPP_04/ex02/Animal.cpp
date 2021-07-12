#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal created" << std::endl;
}

Animal & Animal::operator=(const Animal &src){
	this->type = src.type;
	return (*this);
}

Animal::Animal(Animal & src){

	this->type = src.type;
}

std::string Animal::getType()const	{

	return this->type;
}


Animal::~Animal(){
	std::cout << "Animal destroyed" << std::endl;
}
