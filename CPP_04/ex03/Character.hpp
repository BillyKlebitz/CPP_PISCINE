#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include <iostream>

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const & src);
		Character & operator=(Character const & src);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
	private:
		std::string	name;
		AMateria  *inventory[4];
};
#endif
