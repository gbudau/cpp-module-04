#ifndef VICTIM_HPP_
#define VICTIM_HPP_
#include <string>
#include <iostream>
#include "Victim.hpp"

class Victim {
 public:
	Victim();
	Victim(std::string const & name);
	Victim(Victim const & src);
	virtual ~Victim();
	Victim &			operator=(Victim const & src);
	std::string	const &	getName() const;
	virtual void		getPolymorphed() const;

 protected:
	void				setName(std::string const & name);

 private:
	std::string	_name;
};

std::ostream &	operator<<(std::ostream & ost, Victim const & rhs);

#endif  // VICTIM_HPP_
