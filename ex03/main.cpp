#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int	main() {
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

		delete bob;
		delete me;
		delete src;
	}
	std::cout << "\n############ Extra tests ###########\n";
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());

		// Test learning more than 4 materias
		AMateria*	cure = new Cure();
		src->learnMateria(cure);
		AMateria*	ice = new Ice();
		src->learnMateria(ice);

		ICharacter* me = new Character("me");

		// Test unequip with an empty inventory
		me->unequip(0);

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		AMateria* tmp_xp;
		tmp_xp = src->createMateria("cure");
		me->equip(tmp_xp);

		// Test equipping more than 4 materias
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		// Test use() and XP increase after use()
		me->use(3, *bob);
		std::cout << "XP -> " << tmp_xp->getXP() << "\n";
		me->use(3, *bob);
		std::cout << "XP -> " << tmp_xp->getXP() << "\n";
		me->use(3, *bob);
		std::cout << "XP -> " << tmp_xp->getXP() << "\n";

		// Test invalid index with use()
		me->use(-1, *bob);
		me->use(4, *bob);

		// Test unequip() then use()
		me->unequip(3);
		me->use(3, *bob);

		delete bob;
		
		// The subject states that unequip must not delete Materia
		delete tmp_xp;

		delete tmp;
		delete me;
		delete ice;
		delete cure;
		delete src;
	}

	return 0;
}
