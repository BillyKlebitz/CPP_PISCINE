
#include "FragTrap.hpp"

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_Name << " wants some high fives -><- (*-*)" << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	std::cout << "FragTrap " << this->_Name << " is materialized! Awesome!" << std::endl;
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;

}
