#ifndef ASSAULTTERMINATOR_HPP_
#define ASSAULTTERMINATOR_HPP_
#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
 public:
						AssaultTerminator();
						AssaultTerminator(AssaultTerminator const & src);
	AssaultTerminator &	operator=(AssaultTerminator const & rhs);
						~AssaultTerminator();
	ISpaceMarine*		clone() const;
	void				battleCry() const;
	void				rangedAttack() const;
	void				meleeAttack() const;
};

#endif  // ASSAULTTERMINATOR_HPP_
