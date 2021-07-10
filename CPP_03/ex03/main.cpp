#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	int			i;
	ClapTrap	Morgen("Morgenstern");
	ScavTrap 	Kizaru("Kizyaka");
	ClapTrap	Slava(Morgen);
	FragTrap	Shilo("Shilo"); 
	DiamondTrap Tema("BoulevardDepo");
	
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
	Shilo.highFivesGuys();	
	Tema.whoAmI();
	Tema.attack("Shilo");
	Tema.guardGate();
	Shilo.takeDamage(20);
	Tema.highFivesGuys();	
	return 0;
}
