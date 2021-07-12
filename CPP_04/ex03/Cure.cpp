
#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){

}

Cure::Cure(Cure const & src) : AMateria(src.getType()){

}

Cure & Cure::operator=(Cure const & src){

	if (src.getType() == "cure")
		this->type = src.getType();
	else
		std::cout << "Cure can be only Cure!" << std::endl;
	return (*this);
}

Cure * Cure::clone() const{
	
	return new Cure();
}

void	Cure::use(ICharacter& target){

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
