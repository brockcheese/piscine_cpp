#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50){}

PowerFist::~PowerFist() {}

PowerFist::PowerFist(const PowerFist & p) {
	*this = p;
}

PowerFist & PowerFist::operator= (const PowerFist &rhs) {
	if (this != &rhs) {
		_name = rhs.getName();
		_apcost = rhs.getAPCost();
		_damage = rhs.getDamage();
	}
	return (*this);
}

void PowerFist::attack() const {
	puts("* pschhh... SBAM! *");
}
