#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21){}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & p) {
	*this = p;
}

PlasmaRifle & PlasmaRifle::operator= (const PlasmaRifle &rhs) {
	if (this != &rhs) {
		_name = rhs.getName();
		_apcost = rhs.getAPCost();
		_damage = rhs.getDamage();
	}
	return (*this);
}

void PlasmaRifle::attack() const {
	puts("* piouuu piouuu piouuu *");
}
