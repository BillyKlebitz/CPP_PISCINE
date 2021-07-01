#ifndef WEAPON_H
# define WEAPON_H
#include <iostream>

class Weapon{
	
	public:

		Weapon(std::string type);
		Weapon();
		std::string const &getType( void );
		void	setType(std::string type);

	private:
		
		std::string	type;

};

#endif
