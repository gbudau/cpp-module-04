#include "Squad.hpp"

const int	Squad::_start_units = 1;

Squad::Squad() :
	_max_size(_start_units), _count(0),
	_units(new ISpaceMarine*[_start_units]) {
}

Squad::Squad(Squad const & src) {
	*this = src;
}

Squad &			Squad::operator=(Squad const & rhs) {
	if (this != &rhs) {
		_erase();
		_max_size = rhs.getMaxSize();
		_count = rhs.getCount();
		_units = new ISpaceMarine*[rhs.getCount()];
		for (int i = 0; i < _count; i++) {
			_units[i] = rhs.getUnit(i)->clone();
		}
	}
	return *this;
}

Squad::~Squad() {
	_erase();
}

int				Squad::getCount() const {
	return _count;
}

ISpaceMarine*	Squad::getUnit(int index) const {
	if (index >= 0 && index < _count) {
		return _units[index];
	} else {
		return NULL;
	}
}

int				Squad::push(ISpaceMarine *unit) {
	if (unit == 0 || _is_duplicate(unit)) {
		return _count;
	}
	if (_count == _max_size) {
		int	new_max_size = _max_size * 2;
		ISpaceMarine** new_units = new ISpaceMarine*[new_max_size];

		std::memcpy(new_units, _units, sizeof(ISpaceMarine *) * _count);
		delete[] _units;
		_max_size = new_max_size;
		_units = new_units;
	}
	_units[_count] = unit;
	_count++;
	return _count;
}

int				Squad::getMaxSize() const {
	return _max_size;
}

void			Squad::_erase() {
	for (int i = 0; i < getCount(); i++) {
		delete getUnit(i);
	}
	delete[] _units;
}

bool			Squad::_is_duplicate(ISpaceMarine *unit) {
	for (int i = 0; i < _count; i++) {
		if (_units[i] == unit) {
			return true;
		}
	}
	return false;
}
