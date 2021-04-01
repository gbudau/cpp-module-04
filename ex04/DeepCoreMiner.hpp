#ifndef DEEPCOREMINER_HPP_
#define DEEPCOREMINER_HPP_
#include <iostream>
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser {
 public:
					DeepCoreMiner();
					DeepCoreMiner(DeepCoreMiner const & src);
					~DeepCoreMiner();
	DeepCoreMiner &	operator=(DeepCoreMiner const & rhs);
	void			mine(IAsteroid* asteroid);
	IMiningLaser*	clone() const;
};

#endif  // DEEPCOREMINER_HPP_
