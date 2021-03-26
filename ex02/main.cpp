#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;

		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i) {
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << "\n############Extra tests############\n";
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISpaceMarine* ron = new TacticalMarine;

		ISquad* vlc = new Squad;
		//  Test adding units of the same type
		vlc->push(bob);
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(jim);
		vlc->push(ron);
		vlc->push(ron);
		//  Test adding a NULL unit
		vlc->push(NULL);
		for (int i = 0; i < vlc->getCount(); ++i) {
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		//  Test invalid index
		ISpaceMarine*	unit = vlc->getUnit(-1);
		if (unit) {
			unit->battleCry();
			unit->rangedAttack();
			unit->meleeAttack();
		}
		unit = vlc->getUnit(10000);
		if (unit) {
			unit->battleCry();
			unit->rangedAttack();
			unit->meleeAttack();
		}

		delete vlc;
	}

	return 0;
}
