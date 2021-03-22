#include "Raider.hpp"

Raider::Raider(std::string const & name) : Victim(name) {
	std::cout << "I'm going to enjoy this.\n";
	return;
}

Raider::Raider(Raider const & src) : Victim(src) {
	*this = src;
	return;
}

Raider::~Raider() {
	std::cout << "This'll be the end!\n";
	return;
}

Raider &	Raider::operator=(Raider const & src) {
	if (this != &src) {
		this->setName(src.getName());
	}
	std::cout << "I'm going to enjoy this.\n";
	return *this;
}

std::ostream &	operator<<(std::ostream & ost, Raider const & rhs) {
	ost << "I'm " << rhs.getName() <<
		" and I like otters!\n";
	return ost;
}

void				Raider::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a white bunny!\n";
}
