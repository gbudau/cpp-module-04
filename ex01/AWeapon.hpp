#ifndef AWEAPON_HPP_
#define AWEAPON_HPP_
#include <string>
#include <iostream>

class	AWeapon {
 public:
	AWeapon();
	AWeapon(std::string const & name, int ap_cost, int damage);
	AWeapon(AWeapon const & src);
	AWeapon &	operator=(AWeapon const & rhs);
	virtual ~AWeapon();
	std::string const &	getName() const;
	int					getAPCost() const;
	int					getDamage() const;
	virtual void attack() const = 0;

 protected:
	void				setName(std::string const & name);
	void				setAPCost(int ap_cost);
	void				setDamage(int damage);

 private:
	std::string	_name;
	int			_ap_cost;
	int			_damage;
};

#endif  // AWEAPON_HPP_
