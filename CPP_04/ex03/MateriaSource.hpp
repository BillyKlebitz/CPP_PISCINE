#ifndef MATERIALSOURCE_HPP
#define MATERIALSOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource{

	public:
		MateriaSource();
		MateriaSource & operator=(MateriaSource const & src);
		MateriaSource(MateriaSource const & src);
		~MateriaSource();
		void learnMateria(AMateria* src);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria  *materias[4];
};

#endif

