#ifndef SUPERMUTANT_HPP_
#define SUPERMUTANT_HPP_
#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy {
 public:
	SuperMutant();
	SuperMutant(SuperMutant const & src);
	~SuperMutant();
	SuperMutant &	operator=(SuperMutant const & rhs);
	void 			takeDamage(int damage);
};

#endif  // SUPERMUTANT_HPP_
