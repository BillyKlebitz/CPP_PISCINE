#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	int			i;
	ClapTrap	Morgen("Morgenstern");
	ScavTrap 	Kizaru("Kizyaka");
	ClapTrap	Slava(Morgen);
	
	for (i = 0; i < 11; i++)
		Slava.attack("Morgen");
	Morgen.takeDamage(0);
	Morgen.beRepaired(10);
	
	Kizaru.guardGate();
	
	for (i = 0; i < 3; i++)
	{
		Kizaru.attack ("Morgen");
		Morgen.takeDamage(30);
	}
	
	return 0;
}
