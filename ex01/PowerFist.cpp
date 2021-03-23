#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
	return;
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src) {
	*this = src;
}

PowerFist &	PowerFist::operator=(PowerFist const & rhs) {
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setAPCost(rhs.getAPCost());
		this->setDamage(rhs.getDamage());
	}
	return *this;
}

PowerFist::~PowerFist() {
	return;
}

void			PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *\n";
}
