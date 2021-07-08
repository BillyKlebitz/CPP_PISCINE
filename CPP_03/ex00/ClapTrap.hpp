#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {

	public:
		ClapTrap(ClapTrap const &src);
		explicit ClapTrap(std::string name);
		ClapTrap & operator=(const ClapTrap& src);
		virtual ~ClapTrap();
		int attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);


private:
		std::string	_Name;
		int			_Hitpoints;
		int			_Energy_points;
		int			_Attack_damage;

};


#endif
