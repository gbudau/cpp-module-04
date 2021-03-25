#ifndef ENEMY_HPP_
#define ENEMY_HPP_
#include <string>
#include <iostream>

class Enemy {
 public:
	Enemy();
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	virtual ~Enemy();
	Enemy &				operator=(Enemy const & rhs);
	std::string const &	getType() const;
	int 				getHP() const;
	bool				getIsAlive() const;
	virtual void 		takeDamage(int damage);

 protected:
	void				setHP(int hp);
	void				setType(std::string const & type);
	void				setIsAlive(bool is_alive);

 private:
	int			_hp;
	std::string	_type;
	bool		_is_alive;
};

#endif  // ENEMY_HPP_
