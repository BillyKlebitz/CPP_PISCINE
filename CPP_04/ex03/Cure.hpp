
#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria{
	
	public:
		Cure();
		virtual Cure* clone() const;
		void use(ICharacter& target);
		Cure(Cure const & src);
		Cure& operator=(Cure const & src);
		~Cure();
};

#endif
