#include <string>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() :
	_zero(NULL),
	_one(NULL),
	_two(NULL),
	_three(NULL)
{}

MateriaSource::~MateriaSource() {
	if (_zero != NULL)
		delete(_zero);
	if (_one != NULL)
		delete(_one);
	if (_two != NULL)
		delete(_two);
	if (_three != NULL)
		delete(_three);
}

MateriaSource::MateriaSource (const MateriaSource &c) {
	if (_zero != NULL)
		delete(_zero);
	if (_one != NULL)
		delete(_one);
	if (_two != NULL)
		delete(_two);
	if (_three != NULL)
		delete(_three);
	*this = c;
	_zero = c._zero;
	_one = c._one;
	_two = c._two;
	_three = c._three;
}

MateriaSource & MateriaSource::operator= (const MateriaSource &rhs) {
	if (_zero != NULL)
		delete(_zero);
	if (_one != NULL)
		delete(_one);
	if (_two != NULL)
		delete(_two);
	if (_three != NULL)
		delete(_three);
	if (this != &rhs) {
		_zero = rhs._zero;
		_one = rhs._one;
		_two = rhs._two;
		_three = rhs._three;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m) {
	if (_zero == NULL)
		_zero = m;
	else if (_one == NULL)
		_one = m;
	else if (_two == NULL)
		_two = m;
	else if (_three == NULL)
		_three = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (_zero != NULL && type == (*_zero).getType())
		return (*_zero).clone();
	if (_one != NULL && type == (*_one).getType())
		return (*_one).clone();
	if (_two != NULL && type == (*_two).getType())
		return (*_two).clone();
	if (_three != NULL && type == (*_three).getType())
		return (*_three).clone();
	return (NULL);
}
