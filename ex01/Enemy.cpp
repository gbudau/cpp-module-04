#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
	: _hp(hp), _type(type), _is_alive(true) {
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
		this->setIsAlive(rhs.getIsAlive());
	}
	return *this;
}

void		Enemy::takeDamage(int damage) {
	if (damage <= 0 || this->getIsAlive() == false) {
		return;
	}
	if (this->getHP() <= damage) {
		this->setHP(0);
		this->setIsAlive(false);
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

bool		Enemy::getIsAlive() const {
	return this->_is_alive;
}

void		Enemy::setType(std::string const & type) {
	this->_type = type;
}

void		Enemy::setHP(int hp) {
	this->_hp = hp;
}

void		Enemy::setIsAlive(bool is_alive) {
	this->_is_alive = is_alive;
}
