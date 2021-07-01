
#ifndef ZOMBIE_H
# define ZOMBIE_H
#include <iostream>
#include <iomanip>

class Zombie {


public:

	void announce ( void );
	~Zombie (void);
	Zombie (std::string name);
	Zombie ();
	void setName (std::string name);

private:

	std::string name;

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );
#endif
