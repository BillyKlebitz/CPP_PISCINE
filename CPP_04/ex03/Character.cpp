#include "Character.hpp"

Character::Character(std::string name){

	this->name = name;
}


std::string const & Character::getName() const{

	return this->name;
}

void	Character::equip(AMateria *m){
	
	int i = 0;

	while(inventory[i] != 0 && i < 4)
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
		delete	inventory[i];
}
