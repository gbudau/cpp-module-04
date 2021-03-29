#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _xp(0), _type(type) {
}

AMateria::AMateria(AMateria const & src) {
	*this = src;
}

AMateria &	AMateria::operator=(AMateria const & rhs) {
	if (this != &rhs) {
		_xp = rhs.getXP();
		_type = rhs.getType();
	}
	return *this;
}

AMateria::~AMateria() {
}

std::string const &	AMateria::getType() const {
	return _type;
}

unsigned int		AMateria::getXP() const {
	return _xp;
}

void				AMateria::use(ICharacter const &) {
	_xp += 10;
}

void				AMateria::setXP(unsigned int xp) {
	_xp = xp;
}
