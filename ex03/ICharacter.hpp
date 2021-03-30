#ifndef ICHARACTER_HPP_
#define ICHARACTER_HPP_
#include <string>

// Forward declaration of AMateria class
// Fixes "error: unknown type name 'AMateria'"
class AMateria;

class ICharacter {
 public:
	virtual	~ICharacter() {}
	virtual	std::string const & getName() const = 0;
	virtual	void equip(AMateria* m) = 0;
	virtual	void unequip(int idx) = 0;
	virtual	void use(int idx, ICharacter const & target) = 0;
};

#endif  // ICHARACTER_HPP_