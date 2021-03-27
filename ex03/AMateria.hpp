#ifndef AMATERIA_HPP_
#define AMATERIA_HPP_
#include <string>
#include "ICharacter.hpp"

class AMateria {
 public:
						AMateria();
						AMateria(std::string const & type);
						AMateria(AMateria const & src);
	AMateria &			operator=(AMateria const & rhs);
	virtual				~AMateria();
	std::string const &	getType() const;  // Returns the materia type
	unsigned int		getXP() const;  // Returns the Materia's XP
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter const & target);
	void				setXP(unsigned int xp);

 private:
	unsigned int		_xp;
	std::string			_type;
};

#endif  // AMATERIA_HPP_
