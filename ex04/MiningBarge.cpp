#include "MiningBarge.hpp"

const int	MiningBarge::_max_lasers = 4;

MiningBarge::MiningBarge() : _lasers(), _curr_equiped(0) {
}

MiningBarge::MiningBarge(MiningBarge const & src) {
	*this = src;
}

MiningBarge::~MiningBarge() {
	_eraseLasers();
}

MiningBarge &	MiningBarge::operator=(MiningBarge const & rhs) {
	if (this != &rhs) {
		_eraseLasers();
		_curr_equiped = rhs._curr_equiped;
		for (int i = 0; i < _max_lasers; i++) {
			if (i < rhs._curr_equiped) {
				_lasers[i] = rhs._lasers[i]->clone();
			} else {
				_lasers[i] = 0;
			}
		}
	}
	return *this;
}

void			MiningBarge::_eraseLasers() {
	for (int i = 0; i < _curr_equiped; i++) {
		delete _lasers[i];
	}
}

void			MiningBarge::equip(IMiningLaser *laser) {
	if (_curr_equiped < _max_lasers && laser) {
		_lasers[_curr_equiped] = laser;
		_curr_equiped++;
	}
}

void			MiningBarge::mine(IAsteroid *asteroid) const {
	for (int i = 0; i < _curr_equiped; i++) {
		_lasers[i]->mine(asteroid);
	}
}
