#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner() {
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & src) {
	*this = src;
}

DeepCoreMiner::~DeepCoreMiner() {
}

DeepCoreMiner &	DeepCoreMiner::operator=(DeepCoreMiner const & rhs) {
	if (this != &rhs) {;}
	return *this;
}

void	DeepCoreMiner::mine(IAsteroid* asteroid) {
	std::cout << "* mining deep... got " << asteroid->beMined(this) << "! *\n";
}

IMiningLaser*	DeepCoreMiner::clone() const {
	return new DeepCoreMiner();
}
