#include "AlienAtomizer.hpp"

AlienAtomizer::AlienAtomizer() : AWeapon("Alien Atomizer", 10, 30) {
	return;
}

AlienAtomizer::AlienAtomizer(AlienAtomizer const & src) : AWeapon(src) {
	*this = src;
}

AlienAtomizer &	AlienAtomizer::operator=(AlienAtomizer const & rhs) {
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setAPCost(rhs.getAPCost());
		this->setDamage(rhs.getDamage());
	}
	return *this;
}

AlienAtomizer::~AlienAtomizer() {
	return;
}

void			AlienAtomizer::attack() const {
	std::cout << "* powww powww powww *\n";
}
