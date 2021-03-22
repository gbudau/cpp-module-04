#ifndef PEON_HPP_
#define PEON_HPP_
#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim {
 public:
	Peon();
	Peon(std::string const & name);
	Peon(Peon const & src);
	virtual ~Peon();
	Peon &			operator=(Peon const & src);
	virtual void	getPolymorphed() const;
};

std::ostream &	operator<<(std::ostream & ost, Peon const & rhs);

#endif  // PEON_HPP_
