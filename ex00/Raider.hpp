#ifndef RAIDER_HPP_
#define RAIDER_HPP_
#include <iostream>
#include <string>
#include "Victim.hpp"

class Raider : public Victim {
 public:
	Raider();
	Raider(std::string const & name);
	Raider(Raider const & src);
	virtual ~Raider();
	Raider &			operator=(Raider const & src);
	virtual void	getPolymorphed() const;
};

std::ostream &	operator<<(std::ostream & ost, Raider const & rhs);

#endif  // RAIDER_HPP_
