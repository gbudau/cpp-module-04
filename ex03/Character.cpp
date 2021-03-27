#include "Character.hpp"

const int	Character::_max_items = 4;

Character::Character(std::string const & name) :
	_name(name), _n_current_items(0), _inventory() {
}

Character::Character(Character const & src) {
	if (this != &src) {
		_name = src._name;
		_n_current_items = src._n_current_items;
		for (int i = 0; i < _max_items; i++) {
			_inventory[i] = src._inventory[i]->clone();
		}
	}
}

Character &	Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		_name = rhs._name;
		_n_current_items = rhs._n_current_items;
		_eraseInventory();
		for (int i = 0; i < _max_items; i++) {
			_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character() {
	_eraseInventory();
}

std::string const &	Character::getName() const {
	return _name;
}

void		Character::equip(AMateria*	m) {
	if (_n_current_items < _max_items) {
		int	i = 0;

		while (_inventory[i] && i < _max_items) {
			i++;
		}
		_inventory[i] = m;
		_n_current_items++;
	}
}

void		Character::unequip(int idx) {
	if (idx >= 0 && idx < _n_current_items) {
		_inventory[idx] = 0;
		_n_current_items--;
	}
}

void		Character::use(int idx, ICharacter const & target) {
	if (idx >= 0 && idx < _n_current_items) {
		_inventory[idx]->use(target);
	}
}

void		Character::_eraseInventory() {
	for (int i = 0; i < _max_items; i++) {
		delete _inventory[i];
	}
}
