#include "AMateria.hpp"

AMateria::AMateria(std::string const & type){

	this->type = type;
}

AMateria::AMateria & operator=(AMateria const src){


}

AMateria::AMateria(AMateria const & src){
	
	this->type = src.type;
}
