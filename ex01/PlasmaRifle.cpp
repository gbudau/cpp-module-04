#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src) {
	*this = src;
}

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const & rhs) {
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setAPCost(rhs.getAPCost());
		this->setDamage(rhs.getDamage());
	}
	return *this;
}

PlasmaRifle::~PlasmaRifle() {
	return;
}

void			PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *\n";
}
