#include "ClapTrap.hpp"

int main()
{
	ClapTrap	Morgen("Morgenstern");
	ClapTrap	Slava(Morgen);

	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Slava.attack("Morgen");
	Morgen.takeDamage(0);
	Morgen.beRepaired(10);
	return 0;
}