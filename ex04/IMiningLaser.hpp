#ifndef IMININGLASER_HPP_
#define IMININGLASER_HPP_
#include "IAsteroid.hpp"

class IMiningLaser {
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
		virtual IMiningLaser* clone() const = 0;
};

#endif  // IMININGLASER_HPP_
