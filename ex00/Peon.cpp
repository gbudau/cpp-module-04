#include "Peon.hpp"

Peon::Peon(std::string const & name) : Victim(name) {
	std::cout << "Zog zog.\n";
	return;
}

Peon::Peon(Peon const & src) : Victim(src) {
	*this = src;
	return;
}

Peon::~Peon() {
	std::cout << "Bleuark...\n";
	return;
}

Peon &	Peon::operator=(Peon const & src) {
	if (this != &src) {
		this->setName(src.getName());
	}
	std::cout << "Zog zog.\n";
	return *this;
}

std::ostream &	operator<<(std::ostream & ost, Peon const & rhs) {
	ost << "I'm " << rhs.getName() <<
		" and I like otters!\n";
	return ost;
}

void				Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony!\n";
}
