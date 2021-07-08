#include "ScavTrap.hpp"

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_Name << " has entered gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_Name << " is born! Yay!" << std::endl;
	this->_Hitpoints = 100;
	this->_Energy_points = 50;
	this->_Attack_damage = 20;

}
