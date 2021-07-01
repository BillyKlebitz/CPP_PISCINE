#include "Weapon.hpp"

Weapon::Weapon(std::string type){

	this->type = type;
}

Weapon::Weapon(){
}
std::string const & Weapon::getType( void )
{
	std::string const &typeREF = this->type;

	return (typeREF);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
