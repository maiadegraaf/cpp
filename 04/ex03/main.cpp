#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main() {
	std::cout << "-------making some ice, and using it-------------" << std::endl;

	Character target("target");
	Ice ice;
	Ice *ice_clone = ice.clone();
	ice.use(target);
	delete ice_clone;

	std::cout << "-------subject tests-------------" << std::endl;
	std::cout << "-------making materiasource-------------" << std::endl;

	IMateriaSource* src = new MateriaSource();

	std::cout << "-------learning materias-------------" << std::endl;
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "-------making character-------------" << std::endl;

	ICharacter* me = new Character("me");

	std::cout << "-------equipping stuff-------------" << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("banana");
	me->equip(tmp);

	std::cout << "-------using stuff on bob-------------" << std::endl;

	ICharacter* bob = new Character("bob");
	std::cout << "this is bob, bob says hi" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "-------unequipping-------------" << std::endl;

	me->unequip(0);
	me->unequip(2);

	std::cout << "-------deleting -------------" << std::endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}