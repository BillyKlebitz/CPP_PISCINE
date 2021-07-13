#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <iostream>

class ICharacter;
class AMateria
{
	protected:
		std::string type;
	public:
			//AMateria &  operator=(AMateria const src);
			AMateria(std::string const & type);
			AMateria(AMateria const  & src);
			std::string const & getType() const; //Returns the materia type
			virtual ~AMateria() {};
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif
