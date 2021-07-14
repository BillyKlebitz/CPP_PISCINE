#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	ICharacter* cpy = new Character("cpy");
	*(Character *)cpy = *(Character *)me;
	AMateria* a =  new Ice();
	AMateria* b =  a->clone();
	delete b;
	delete me;
	cpy->use(0, *bob);
	cpy->use(1, *bob);
	delete cpy;
	delete bob;
	delete src;
	return 0;
}
