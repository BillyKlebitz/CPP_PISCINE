#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	protected:
		std::string type;
		//	AMateria();
		//	~AMateria();
	public:
			AMateria(std::string const & type);
			AMateria(AMateria const  & src);
			AMateria & operator=(AMateria const src);	
			std::string const & getType() const; //Returns the materia type
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};

#endif
