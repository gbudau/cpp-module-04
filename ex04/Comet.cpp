#include "Comet.hpp"

Comet::Comet() : _name("Comet") {
}

Comet::Comet(Comet const & src) {
	*this = src;
}

Comet::~Comet() {
}

Comet &		Comet::operator=(Comet const & rhs) {
	if (this != &rhs) {
		_name = rhs._name;
	}
	return *this;
}

std::string	Comet::beMined(DeepCoreMiner*) const {
	return {"Meium"};
}

std::string	Comet::beMined(StripMiner*) const {
	return {"Tartarite"};
}

std::string	Comet::getName() const {
	return _name;
}
