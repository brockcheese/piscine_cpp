#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource{
	AMateria * _zero;
	AMateria * _one;
	AMateria * _two;
	AMateria * _three;

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource & operator = (const MateriaSource &);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif
