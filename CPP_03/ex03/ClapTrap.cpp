#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name)
{
	this->_Name = name;
	this->_Hitpoints = 10;
	this->_Energy_points = 10;
	this->_Attack_damage = 0;
	
	std::cout 
		<< "ClapTrap " << this->_Name 
		<< " with " << this->_Hitpoints << " Hitpoints, " 
		<< this->_Energy_points  << " Energy and "
	  	<< this->_Attack_damage << " Attack Damage"
		" is born!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->_Hitpoints = src._Hitpoints;
	this->_Name = src._Name;
	this->_Energy_points = src._Energy_points;
	this->_Attack_damage = src._Attack_damage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &src){

	*this = src;
}

int ClapTrap::attack(const std::string &target)
{
	if (this->_Energy_points > 0)
	{
		std::cout
			<< "ClapTrap " <<  this->_Name
			<< " attacks " << target
			<< " causing " << this->_Attack_damage
			<< " points of damage!" << std::endl;
		this->_Energy_points--;
		return 0;
	}
	std::cout
			<< "ClapTrap " << this->_Name
			<< " is exhausted! Try to attack later" << std::endl;
	return 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hitpoints == 0)
	{
		std::cout << "ClapTrap " << this->_Name << " is already dead." << std::endl; 
		return;
	}
	std::cout
			<< "ClapTrap " << this->_Name
			<< " takes " << amount << " points of damage!"
			<< std::endl;
	if (this->_Hitpoints <= amount)
	{
		std::cout << "ClapTrap " << this->_Name << " is DEAD." << std::endl; 
		this->_Hitpoints = 0;
	}
	else
		this->_Hitpoints -= amount;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout
			<< "ClapTrap " << this->_Name
			<< " is repaired with " << amount << " HP!"
			<< std::endl;
	this->_Hitpoints += amount;
}

ClapTrap::~ClapTrap(){

	std::cout << "ClapTrap " << this->_Name << " destroyed" << std::endl;
}




