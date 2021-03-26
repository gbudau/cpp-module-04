#ifndef TACTICALMARINE_HPP_
#define TACTICALMARINE_HPP_
#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
 public:
						TacticalMarine();
						TacticalMarine(TacticalMarine const & src);
	TacticalMarine &	operator=(TacticalMarine const & rhs);
						~TacticalMarine();
	ISpaceMarine*		clone() const;
	void				battleCry() const;
	void				rangedAttack() const;
	void				meleeAttack() const;
};

#endif  // TACTICALMARINE_HPP_
