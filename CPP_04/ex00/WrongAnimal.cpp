
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src){
	this->type = src.type;
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal & src){

	this->type = src.type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "* * * " <<std::endl;
}

std::string WrongAnimal::getType()const	{

	return this->type;
}


WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destroyed" << std::endl;
}
