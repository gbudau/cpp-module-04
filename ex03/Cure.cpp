#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const & src) : AMateria(src) {
	*this = src;
}

Cure &	Cure::operator=(Cure const & rhs) {
	if (this != &rhs) {
		setXP(rhs.getXP());
	}
	return *this;
}

Cure::~Cure() {
}

AMateria*	Cure::clone() const {
	AMateria*	copy = new Cure();
	copy->setXP(getXP());
	return copy;
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
	AMateria::use(target);
}

