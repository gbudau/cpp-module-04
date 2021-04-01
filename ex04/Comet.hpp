#ifndef COMET_HPP_
#define COMET_HPP_
#include <iostream>
#include <string>
#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

class Comet : public IAsteroid {
 public:
				Comet();
				Comet(Comet const & src);
				~Comet();
	Comet &		operator=(Comet const & rhs);
	std::string	beMined(DeepCoreMiner*) const;
	std::string beMined(StripMiner*) const;
	std::string getName() const;

 private:
	std::string	_name;
};

#endif  // COMET_HPP_
