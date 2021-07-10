#include "ScavTrap.hpp"

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_Name << " has entered gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	this->_Hitpoints = 100;
	this->_Energy_points = 100;
	this->_Attack_damage = 30;
	std::cout 
		<< "ScavTrap " << this->_Name 
		<< " with " << this->_Hitpoints << " Hitpoints, " 
		<< this->_Energy_points  << " Energy and "
	  	<< this->_Attack_damage << " Attack Damage"
		" is born!" << std::endl;
}

int	ScavTrap::attack(std::string const & target){

	if (this->_Energy_points > 0)
	{
		std::cout
			<< "ScavTrap " <<  this->_Name
			<< " attacks " << target
			<< " causing " << this->_Attack_damage
			<< " points of damage!" << std::endl;
		this->_Energy_points--;
		return 0;
	}
	std::cout
			<< "ScavTrap " << this->_Name
			<< " is exhausted! Try to attack later" << std::endl;
	return 1;
}

ScavTrap::~ScavTrap(){

	std::cout << "ScavTrap " << this->_Name << " destroyed" << std::endl;
}
