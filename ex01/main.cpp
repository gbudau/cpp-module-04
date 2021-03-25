#include <iostream>
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"
#include "CyberAnt.hpp"
#include "AlienAtomizer.hpp"

int	main() {
	{
		Character* me = new Character("me");

		std::cout << *me;

		Enemy* b = new RadScorpion();

		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();

		me->equip(pr);
		std::cout << *me;
		me->equip(pf);

		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;

		delete pf;
		delete pr;
		delete b;
		delete me;
	}
	std::cout << "\n####### Extra tests #######\n";
	{
		Character*	khans = new Character("Khans");

		std::cout << *khans;

		Enemy*		ca = new CyberAnt();
		Enemy*		sm = new SuperMutant();

		AWeapon*	aa = new AlienAtomizer();
		AWeapon*	pr = new PlasmaRifle();

		khans->equip(aa);
		std::cout << *khans;
		khans->attack(ca);
		std::cout << *khans;
		khans->attack(ca);
		std::cout << *khans;
		khans->attack(ca);
		std::cout << *khans;
		khans->attack(ca);
		std::cout << *khans;
		khans->attack(ca);

		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;

		std::cout << *khans;
		khans->attack(ca);
		std::cout << *khans;
		khans->attack(ca);

		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);

		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;

		khans->equip(pr);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);

		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;
		khans->recoverAP();
		std::cout << *khans;

		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);
		std::cout << *khans;
		khans->attack(sm);

		delete aa;
		delete pr;
		delete ca;
		delete sm;
		delete khans;
	}
	return 0;
}
