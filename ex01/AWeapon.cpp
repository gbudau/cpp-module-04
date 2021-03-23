#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int ap_cost, int damage) :
	_name(name), _ap_cost(ap_cost), _damage(damage) {
		return;
}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
}

AWeapon &	AWeapon::operator=(AWeapon const & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_ap_cost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
	}
	return *this;
}

AWeapon::~AWeapon() {
	return;
}

std::string const &	AWeapon::getName() const {
	return this->_name;
}

int					AWeapon::getAPCost() const {
	return this->_ap_cost;
}

int					AWeapon::getDamage() const {
	return this->_damage;
}

void				AWeapon::setName(std::string const & name) {
	this->_name = name;
}

void				AWeapon::setAPCost(int ap_cost) {
	this->_ap_cost = ap_cost;
}

void				AWeapon::setDamage(int damage) {
	this->_damage = damage;
}
