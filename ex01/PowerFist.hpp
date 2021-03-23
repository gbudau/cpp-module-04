#ifndef POWERFIST_HPP_
#define POWERFIST_HPP_
#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon {
 public:
	PowerFist();
	PowerFist(PowerFist const & src);
	PowerFist &	operator=(PowerFist const & rhs);
	~PowerFist();
	void attack()	const;
};

#endif  // POWERFIST_HPP_
