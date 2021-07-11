#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

	this->type = "WrongCat";
}


void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

