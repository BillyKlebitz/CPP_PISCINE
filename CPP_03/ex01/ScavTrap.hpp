#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap{

	public:
		ScavTrap(std::string name);
		virtual ~ScavTrap();
		int attack(std::string const & target);
		void guardGate();
};



#endif
