#include "Character.hpp"

const int Character::_max_ap = 40;
const int Character::_recover_ap = 10;

Character::Character(std::string const & name) :
	_name(name), _ap(Character::_max_ap), _weapon(0) {
	return;
}

Character::Character(Character const & src) {
	*this = src;
}

Character &			Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setAP(rhs.getAP());
	}
	return *this;
}

Character::~Character() {
	return;
}

void				Character::recoverAP() {
	if (this->getAP() <= Character::_max_ap - Character::_recover_ap) {
		this->setAP(this->getAP() + Character::_recover_ap);
	} else {
		this->setAP(Character::_max_ap);
	}
}

void				Character::equip(AWeapon * weapon) {
	this->setWeapon(weapon);
}

void				Character::attack(Enemy *enemy) {
	if (this->getWeapon() == 0 || enemy == 0 || enemy->getIsAlive() == false ||
			(this->getWeapon()->getAPCost() > this->getAP())) {
		return;
	} else {
		std::cout << this->getName() << " attacks " <<
			enemy->getType() << " with a " <<
			this->getWeapon()->getName() << "\n";
		this->getWeapon()->attack();
		this->setAP(this->getAP() - this->getWeapon()->getAPCost());
		enemy->takeDamage(this->getWeapon()->getDamage());
	}
}

std::ostream &		operator<<(std::ostream & ost, Character const & rhs) {
	if (rhs.getWeapon() == 0) {
		ost << rhs.getName() << " has " << rhs.getAP() <<
			" AP and is unarmed\n";
	} else {
		ost << rhs.getName() << " has " << rhs.getAP() <<
			" AP and wields a " << rhs.getWeapon()->getName() << "\n";
	}
	return ost;
}

std::string const &	Character::getName() const {
	return this->_name;
}

int					Character::getAP() const {
	return this->_ap;
}

AWeapon *			Character::getWeapon() const {
	return this->_weapon;
}

void				Character::setName(std::string const & name) {
	this->_name = name;
}

void				Character::setAP(int ap) {
	this->_ap = ap;
}

void				Character::setWeapon(AWeapon *weapon) {
	this->_weapon = weapon;
}
