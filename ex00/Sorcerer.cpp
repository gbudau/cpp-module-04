#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const & name, std::string const & title)
	: _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born!\n";
	return;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	*this = src;
	return;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title <<
		", is dead. Consequences will never be the same!\n";
	return;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const & src) {
	if (this != &src) {
		this->_name = src._name;
		this->_title = src._title;
	}
	std::cout << this->_name << ", " << this->_title << ", is born!\n";
	return *this;
}

std::ostream &	operator<<(std::ostream & ost, Sorcerer const & rhs) {
	ost << "I am " << rhs.getName() << ", " << rhs.getTitle() <<
		", and I like ponies!\n";
	return ost;
}

std::string const &	Sorcerer::getName() const {
	return this->_name;
}

std::string const &	Sorcerer::getTitle() const {
	return this->_title;
}

void				Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}
