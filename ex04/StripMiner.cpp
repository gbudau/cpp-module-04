#include "StripMiner.hpp"

StripMiner::StripMiner() {
}

StripMiner::StripMiner(StripMiner const & src) {
	*this = src;
}

StripMiner::~StripMiner() {
}

StripMiner &	StripMiner::operator=(StripMiner const & rhs) {
	if (this != &rhs) {;}
	return *this;
}

void	StripMiner::mine(IAsteroid* asteroid) {
	std::cout << "* strip mining... got " << asteroid->beMined(this) << "! *\n";
}

IMiningLaser*	StripMiner::clone() const {
	return new StripMiner();
}
