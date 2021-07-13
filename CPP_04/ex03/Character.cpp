#include "Character.hpp"

Character::Character(std::string name){

	this->name = name;
	for (int i=0; i < 4; i++)
		this->inventory[i] = 0;
}

Character & Character::operator=(Character const & src){

	this->name = src.name;
	for (int i=0; i < 4; i++)
		if (src.inventory[i] != 0)
			this->inventory[i] = src.inventory[i]->clone();
	return *this;
}

Character::Character(Character const & src){

	*this = src;
}

std::string const & Character::getName() const{

	return this->name;
}

void	Character::equip(AMateria *m){
	
	int i = 0;

	while (this->inventory[i] != 0 && i < 4)
		i++;
	if (i < 4)
		inventory[i] = m;
}

void	Character::unequip(int idx){

	if (idx >= 0 && idx <= 4)
		if (this->inventory[idx] != 0)
			this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target){

	if (idx >= 0 && idx <= 4)
		if (this->inventory[idx] != 0)
			this->inventory[idx]->use(target);
}

Character::~Character(){

	for (int i=0; i < 4; i++)
		if (this->inventory[i] != 0)
			delete	this->inventory[i];
}
