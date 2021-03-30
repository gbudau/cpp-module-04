#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
	: _hp(hp), _type(type) {
	return;
}

Enemy::Enemy(Enemy const & src) {
	*this = src;
}

Enemy::~Enemy() {
	return;
}

Enemy &		Enemy::operator=(Enemy const & rhs) {
	if (this != &rhs) {
		this->setType(rhs.getType());
		this->setHP(rhs.getHP());
	}
	return *this;
}

void		Enemy::takeDamage(int damage) {
	if (damage <= 0) {
		return;
	}
	if (this->getHP() <= damage) {
		this->setHP(0);
	} else {
		this->setHP(this->getHP() - damage);
	}
}

std::string const &	Enemy::getType() const {
	return this->_type;
}

int					Enemy::getHP() const {
	return this->_hp;
}

void		Enemy::setType(std::string const & type) {
	this->_type = type;
}

void		Enemy::setHP(int hp) {
	this->_hp = hp;
}
