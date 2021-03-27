#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const & src) : AMateria(src) {
	*this = src;
}

Ice &	Ice::operator=(Ice const & rhs) {
	if (this != &rhs) {
		setXP(rhs.getXP());
	}
	return *this;
}

Ice::~Ice() {
}

AMateria*	Ice::clone() const {
	AMateria*	copy = new Ice();
	copy->setXP(getXP());
	return copy;
}

void		Ice::use(ICharacter const & target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	AMateria::use(target);
}

