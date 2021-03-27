#include "MateriaSource.hpp"

const int	MateriaSource::_max_items = 4;

MateriaSource::MateriaSource() : _n_current_items(0), _inventory() {
}

MateriaSource::MateriaSource(MateriaSource const & src) :
	_n_current_items(0), _inventory() {
	if (this != &src) {
		_n_current_items = src._n_current_items;
		for (int i = 0; i < _max_items; i++) {
			_inventory[i] = src._inventory[i]->clone();
		}
	}
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs) {
	if (this != &rhs) {
		_n_current_items = rhs._n_current_items;
		_eraseInventory();
		for (int i = 0; i < _max_items; i++) {
			_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	_eraseInventory();
}

void			MateriaSource::learnMateria(AMateria *m) {
	if (_n_current_items < _max_items) {
		int	i = 0;

		while (_inventory[i] && i < _max_items) {
			i++;
		}
		_inventory[i] = m;
		_n_current_items++;
	}
}

AMateria*		MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _max_items; i++) {
		if (_inventory[i] && _inventory[i]->getType() == type) {
			return _inventory[i]->clone();
		}
	}
	return 0;
}

void			MateriaSource::_eraseInventory() {
	for (int i = 0; i < _max_items; i++) {
		delete _inventory[i];
	}
}
