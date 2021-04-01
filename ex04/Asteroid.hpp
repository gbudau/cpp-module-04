#ifndef ASTEROID_HPP_
#define ASTEROID_HPP_
#include <iostream>
#include <string>
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class Asteroid : public IAsteroid {
 public:
				Asteroid();
				Asteroid(Asteroid const & src);
				~Asteroid();
	Asteroid &	operator=(Asteroid const & rhs);
	std::string	beMined(DeepCoreMiner*) const;
	std::string beMined(StripMiner*) const;
	std::string getName() const;

 private:
	std::string	_name;
};

#endif  // ASTEROID_HPP_
