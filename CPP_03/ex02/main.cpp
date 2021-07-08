#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	int			i;
	ClapTrap	Morgen("Morgenstern");
	ScavTrap 	Kizaru("Kizyaka");
	ClapTrap	Slava(Morgen);
	FragTrap	Shilo("Shilo"); 
	
	for (i = 0; i < 11; i++)
		Slava.attack("Morgen");
	Morgen.takeDamage(0);
	Morgen.beRepaired(10);
	
	Kizaru.guardGate();
	
	for (i = 0; i < 3; i++)
	{
		Kizaru.attack ("Morgen");
		Morgen.takeDamage(20);
	}
	Shilo.highFivesGuys();	
	return 0;
}
