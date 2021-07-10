#ifndef DIAMONDTRAP_CPP
#define	DIAMONDTRAP_CPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap{

	public:
		DiamondTrap(std::string name);
		void	whoAmI();
		int	attack(std::string target);
	private:
		std::string	_Name;
};

#endif

