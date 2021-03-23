#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!\n";
	return;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(170, "Super Mutant") {
	*this = src;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const & rhs) {
	if (this != &rhs) {
		this->setType(rhs.getType());
		this->setHP(rhs.getHP());
	}
	std::cout << "Gaaah. Me want smash heads!\n";
	return *this;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh...\n";
	return;
}

void			SuperMutant::takeDamage(int damage) {
	damage -= 3;
	Enemy::takeDamage(damage);
}
