#ifndef CYBERANT_HPP_
#define CYBERANT_HPP_
#include <string>
#include <iostream>
#include "Enemy.hpp"

class CyberAnt : public Enemy {
 public:
	CyberAnt();
	CyberAnt(CyberAnt const & src);
	~CyberAnt();
	CyberAnt &	operator=(CyberAnt const & rhs);
};

#endif  // CYBERANT_HPP_
