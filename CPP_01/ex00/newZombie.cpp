
# include "Zombie.hpp"


Zombie* newZombie( std::string name )
{
	Zombie *brain_eater = new Zombie(name);
	return (brain_eater);
}
