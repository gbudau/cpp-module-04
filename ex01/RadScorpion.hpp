#ifndef RADSCORPION_HPP_
#define RADSCORPION_HPP_
#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy {
 public:
	RadScorpion();
	RadScorpion(RadScorpion const & src);
	~RadScorpion();
	RadScorpion &	operator=(RadScorpion const & rhs);
};

#endif  // RADSCORPION_HPP_
