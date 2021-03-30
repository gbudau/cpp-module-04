#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
 public:
						Character();
						Character(std::string const & name);
						Character(Character const & src);
	Character &			operator=(Character const & rhs);
						~Character();
	std::string const &	getName() const;
	void				equip(AMateria* m);
	void 				unequip(int idx);
	void 				use(int idx, ICharacter& target);

 private:
	std::string			_name;
	int					_n_current_items;
	AMateria*			_inventory[4];
	void				_eraseInventory();
	static const int	_max_items;
};

#endif  // CHARACTER_HPP_
