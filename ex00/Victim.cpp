#include "Victim.hpp"

Victim::Victim(std::string const & name) : _name(name) {
	std::cout << "Some random victim called " << this->_name <<
		" just appeared!\n";
	return;
}

Victim::Victim(Victim const & src) {
	*this = src;
	return;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name <<
		" just died for no apparent reason!\n";
	return;
}

Victim &	Victim::operator=(Victim const & src) {
	if (this != &src) {
		this->_name = src._name;
	}
	std::cout << "Some random victim called " << this->_name <<
		" just appeared!\n";
	return *this;
}

std::ostream &	operator<<(std::ostream & ost, Victim const & rhs) {
	ost << "I'm " << rhs.getName() <<
		" and I like otters!\n";
	return ost;
}

std::string const &	Victim::getName() const {
	return this->_name;
}

void				Victim::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a cute little sheep!\n";
}

void				Victim::setName(std::string const & name) {
	this->_name = name;
}
