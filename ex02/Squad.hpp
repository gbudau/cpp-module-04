#ifndef SQUAD_HPP_
#define SQUAD_HPP_
#include <cstring>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad {
 public:
						Squad();
						Squad(Squad const & src);
	Squad &				operator=(Squad const & rhs);
	 					~Squad();
	int					getCount() const;
	ISpaceMarine*		getUnit(int index) const;
	int					push(ISpaceMarine*);

 protected:
	int					getMaxSize() const;

 private:
	int					_max_size;
	int					_count;
	ISpaceMarine**		_units;
	void				_erase();
	bool				_is_duplicate(ISpaceMarine *unit);
	static const int	_start_units;
};

#endif  // SQUAD_HPP_
