# include "Zombie.hpp"

int main()
{
	Zombie *ptrzombie;
	int i;

	ptrzombie = zombieHorde(42, "ramzan");
	for (i = 0; i < 42; i++)
		ptrzombie[i].announce();
	delete [] ptrzombie;
}
