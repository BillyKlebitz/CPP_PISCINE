#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){

	this->_Name = name;
	this->_Hitpoints = FragTrap::_Hitpoints;
	this->_Energy_points = 100;
	this->_Attack_damage = FragTrap::_Attack_damage;
	
	std::cout 
		<< "DiamondTrap " << this->_Name 
		<< " with " << this->_Hitpoints << " Hitpoints, " 
		<< this->_Energy_points  << " Energy and "
	  	<< this->_Attack_damage << " Attack Damage"
		" is born!" << std::endl;
}

int DiamondTrap::attack(std::string target)
{
	return(ScavTrap::attack(target));
}

void	DiamondTrap::whoAmI(){
	std::cout 
			<< "I`m DiamondTrap. My real name is " << this->_Name 
			<< " and my ClapTrap::name is " << ClapTrap::_Name
			<< std::endl;
}
