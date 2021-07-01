#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie* announcer = newZombie(name);
	announcer->announce();
	delete announcer;
	
}
