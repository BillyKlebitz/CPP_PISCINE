#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){

}

Ice::Ice(Ice const & src) : AMateria(src.getType()){

}

Ice & Ice::operator=(Ice const & src){

	if (src.getType() == "ice")
		this->type = src.getType();
	else
		std::cout << "Ice can be only Ice!" << std::endl;
	return (*this);
}

Ice * Ice::clone() const{
	
	return new Ice();
}

void	Ice::use(ICharacter& target){
	
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;

}
