#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	
	this->_Energy_points = this->ScavTrap::_Energy_points;
	this->_Hitpoints = this->FragTrap::_Hitpoints;
	this->_Attack_damage = this->FragTrap::_Attack_damage;

	std::cout << "DiamondTrap " << this->_Name << " with " << this->_Hitpoints << " Hitpoints and " << this->_Energy_points  << " Energy is born!" << std::endl;
}
