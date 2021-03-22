#ifndef SORCERER_HPP_
#define SORCERER_HPP_
#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer {
 public:
	Sorcerer();
	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer();
	Sorcerer &			operator=(Sorcerer const & src);
	std::string	const &	getName() const;
	std::string	const &	getTitle() const;
	void				polymorph(Victim const & victim) const;

 private:
	std::string	_name;
	std::string	_title;
};

std::ostream &	operator<<(std::ostream & ost, Sorcerer const & rhs);

#endif  // SORCERER_HPP_
