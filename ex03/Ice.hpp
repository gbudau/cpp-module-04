#ifndef ICE_HPP_
#define ICE_HPP_
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
 public:
				Ice();
				Ice(Ice const & src);
	Ice &		operator=(Ice const & rhs);
				~Ice();
	AMateria*	clone() const;
	void		use(ICharacter const & target);
};

#endif  // ICE_HPP_
