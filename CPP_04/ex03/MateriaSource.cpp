#include "MateriaSource.hpp"


void	MateriaSource::learnMateria(AMateria* src){
		
	int i = 0;

	while(materias[i] != 0 && i < 4)
		i++;
	if (i < 4)
		materias[i] = src;
}


AMateria* MateriaSource::createMateria(std::string const & type){

	int i = -1;

	while (++i < 4 && materias[i] != 0)
		if (materias[i]->getType() == type)
			return materias[i]->clone();
	return 0;
}


MateriaSource::~MateriaSource()
{
	for (int i=0; i < 4; i++)
		delete	materias[i];
}
