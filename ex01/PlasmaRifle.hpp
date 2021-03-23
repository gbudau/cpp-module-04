#ifndef PLASMARIFLE_HPP_
#define PLASMARIFLE_HPP_
#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
 public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & src);
	PlasmaRifle &	operator=(PlasmaRifle const & rhs);
	~PlasmaRifle();
	void attack()	const;
};

#endif  // PLASMARIFLE_HPP_
