#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Raider.hpp"

int	main() {
	{
		Sorcerer	robert("Robert", "the Magnificent");
		Victim		jim("Jimmy");
		Peon		joe("Joe");

		std::cout << robert << jim << joe;

		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << "\n\n";
	{
		Sorcerer	merlin("Merlin", "the Prophet");
		Raider		fenris("Fenris");
		Victim		larry("Larry");
		Victim		*jim = new Raider("Jimmy");

		std::cout << merlin << fenris << larry << *jim;
		merlin.polymorph(fenris);
		merlin.polymorph(larry);
		merlin.polymorph(*jim);

		delete jim;
	}
	return 0;
}
