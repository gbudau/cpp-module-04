#ifndef MININGBARGE_HPP_
#define MININGBARGE_HPP_
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class MiningBarge {
 public:
						MiningBarge();
						MiningBarge(MiningBarge const & src);
						~MiningBarge();
	MiningBarge &		operator=(MiningBarge const & rhs);
	void				equip(IMiningLaser*);
	void				mine(IAsteroid*) const;

 private:
	IMiningLaser*		_lasers[4];
	int					_curr_equiped;
	static const int	_max_lasers;
	void				_eraseLasers();
};

#endif  // MININGBARGE_HPP_
