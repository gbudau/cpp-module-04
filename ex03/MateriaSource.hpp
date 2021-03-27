#ifndef MATERIASOURCE_HPP_
#define MATERIASOURCE_HPP_
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
 public:
						MateriaSource();
						MateriaSource(MateriaSource const & src);
	MateriaSource &		operator=(MateriaSource const & src);
						~MateriaSource();
	void				learnMateria(AMateria*);
	AMateria*			createMateria(std::string const & type);

 private:
	int					_n_current_items;
	AMateria*			_inventory[4];
	static const int	_max_items;
	void				_eraseInventory();
};

#endif  // MATERIASOURCE_HPP_
