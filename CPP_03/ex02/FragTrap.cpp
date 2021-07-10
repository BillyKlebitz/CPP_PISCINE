
#include "FragTrap.hpp"

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_Name << " wants some high fives -><- (*-*)" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;

	std::cout 
		<< "FragTrap " << this->_Name 
		<< " with " << this->_Hitpoints << " Hitpoints, " 
		<< this->_Energy_points  << " Energy and "
	  	<< this->_Attack_damage << " Attack Damage"
		" is born!" << std::endl;

}

FragTrap::~FragTrap(){

	std::cout << "FragTrap " << this->_Name << " destroyed" << std::endl;
}
