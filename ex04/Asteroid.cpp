#include "Asteroid.hpp"

Asteroid::Asteroid() : _name("Asteroid") {
}

Asteroid::Asteroid(Asteroid const & src) {
	*this = src;
}

Asteroid::~Asteroid() {
}

Asteroid &	Asteroid::operator=(Asteroid const & rhs) {
	if (this != &rhs) {
		_name = rhs._name;
	}
	return *this;
}

std::string	Asteroid::beMined(DeepCoreMiner*) const {
	return {"Dragonite"};
}

std::string	Asteroid::beMined(StripMiner*) const {
	return {"Flavium"};
}

std::string	Asteroid::getName() const {
	return _name;
}
