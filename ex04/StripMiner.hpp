#ifndef STRIPMINER_HPP_
#define STRIPMINER_HPP_
#include <iostream>
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser {
 public:
					StripMiner();
					StripMiner(StripMiner const & src);
					~StripMiner();
	StripMiner &	operator=(StripMiner const & rhs);
	void			mine(IAsteroid* asteroid);
	IMiningLaser*	clone() const;
};

#endif  // STRIPMINER_HPP_
