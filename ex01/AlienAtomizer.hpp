#ifndef ALIENATOMIZER_HPP_
#define ALIENATOMIZER_HPP_
#define PLASMARIFLE_HPP_
#include <string>
#include <iostream>
#include "AWeapon.hpp"

class AlienAtomizer : public AWeapon {
 public:
	AlienAtomizer();
	AlienAtomizer(AlienAtomizer const & src);
	AlienAtomizer &	operator=(AlienAtomizer const & rhs);
	~AlienAtomizer();
	void attack()	const;
};

#endif  // ALIENATOMIZER_HPP_
