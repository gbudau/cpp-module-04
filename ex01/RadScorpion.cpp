#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *\n";
	return;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(80, "RadScorpion") {
	*this = src;
}

RadScorpion &	RadScorpion::operator=(RadScorpion const & rhs) {
	if (this != &rhs) {
		this->setType(rhs.getType());
		this->setHP(rhs.getHP());
	}
	std::cout << "* click click click *\n";
	return *this;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *\n";
	return;
}
