#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string const & name) :
	_zero(NULL),
	_one(NULL),
	_two(NULL),
	_three(NULL),
	_name(name)
{}

Character::Character() :
	_zero(NULL),
	_one(NULL),
	_two(NULL),
	_three(NULL)
{}

Character::~Character() {
	if (_zero != NULL)
		delete(_zero);
	if (_one != NULL)
		delete(_one);
	if (_two != NULL)
		delete(_two);
	if (_three != NULL)
		delete(_three);
}

Character::Character (const Character &c) {
	if (_zero != NULL)
		delete(_zero);
	if (_one != NULL)
		delete(_one);
	if (_two != NULL)
		delete(_two);
	if (_three != NULL)
		delete(_three);
	_name = c.getName();
	_zero = c._zero;
	_one = c._one;
	_two = c._two;
	_three = c._three;
}

Character & Character::operator = (const Character &rhs) {
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
		_name = rhs._name;
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	if (_zero == NULL)
		_zero = m;
	else if (_one == NULL)
		_one = m;
	else if (_two == NULL)
		_two = m;
	else if (_three == NULL)
		_three = m;
}

void Character::unequip(int idx) {
	if (idx == 0) {
		if (_zero != NULL)
			_zero = NULL;
	}
	else if (idx == 1) {
		if (_one != NULL)
			_one = NULL;
	}
	else if (idx == 2) {
		if (_two != NULL)
			_two = NULL;
	}
	else if (idx == 3) {
		if (_three != NULL)
			_three = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx == 0) {
		if (_zero != NULL)
			_zero->use(target);
	}
	else if (idx == 1) {
		if (_one != NULL)
			_one->use(target);
	}
	else if (idx == 2) {
		if (_two != NULL)
			_two->use(target);
	}
	else if (idx == 3) {
		if (_three != NULL)
			_three->use(target);
	}
}
