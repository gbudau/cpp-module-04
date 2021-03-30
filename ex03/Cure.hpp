#ifndef CURE_HPP_
#define CURE_HPP_
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
 public:
				Cure();
				Cure(Cure const & src);
	Cure &		operator=(Cure const & rhs);
				~Cure();
	AMateria*	clone() const;
	void		use(ICharacter& target);
};

#endif  // CURE_HPP_
