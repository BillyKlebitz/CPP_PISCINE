#include "AMateria.hpp"

AMateria::AMateria(std::string const & type){

	this->type = type;
}

//AMateria &  AMateria::operator=(AMateria const src){
//	
//	this->type = src.type;
//	return (*this);
//}

std::string const & AMateria::getType() const{
	
	return this->type;
}



AMateria::AMateria(AMateria const & src){
	
	this->type = src.type;
}


void AMateria::use(ICharacter& target){
	(void)target;
}
