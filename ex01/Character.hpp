#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_
#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character {
 public:
	Character();
	Character(std::string const & name);
	Character(Character const & src);
	Character &			operator=(Character const & rhs);
	~Character();
	void				recoverAP();
	void 				equip(AWeapon *weapon);
	void 				attack(Enemy *enemy);
	std::string const &	getName() const;
	int					getAP() const;
	AWeapon				*getWeapon() const;
	Enemy				*getEnemy() const;

 protected:
	void				setName(std::string const & name);
	void				setAP(int ap);
	void				setWeapon(AWeapon *weapon);
	void				setEnemy(Enemy *enemy);

 private:
	std::string			_name;
	int					_ap;
	AWeapon				*_weapon;
	Enemy				*_enemy;
	static const int	_max_ap;
	static const int	_recover_ap;
};

std::ostream &			operator<<(std::ostream & ost, Character const & rhs);

#endif  // CHARACTER_HPP_
