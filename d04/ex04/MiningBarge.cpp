#include "MiningBarge.hpp"

MiningBarge::MiningBarge() :
	_zero(NULL),
	_one(NULL),
	_two(NULL),
	_three(NULL)
{}

MiningBarge::~MiningBarge() {}

MiningBarge::MiningBarge(const MiningBarge &mb) {
	*this = mb;
}

MiningBarge & MiningBarge::operator= (const MiningBarge &rhs) {
	if (this != &rhs) {
		_zero = rhs._zero;
		_one = rhs._one;
		_two = rhs._two;
		_three = rhs._three;
	}
	return (*this);
}

void MiningBarge::equip(IMiningLaser * iml) {
	if (_zero == NULL)
		_zero = iml;
	else if (_one == NULL)
		_one = iml;
	else if (_two == NULL)
		_two = iml;
	else if (_three == NULL)
		_three = iml;
}

void MiningBarge::mine(IAsteroid* ia) const {
	if (_zero != NULL)
		_zero->mine(ia);
	if (_one != NULL)
		_one->mine(ia);
	if (_two != NULL)
		_two->mine(ia);
	if (_three != NULL)
		_three->mine(ia);
}
