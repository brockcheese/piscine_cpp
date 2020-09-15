#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
	_name(name),
	_damage(damage),
	_apcost(apcost)
{}

AWeapon::AWeapon() {}

AWeapon::~AWeapon() {}

AWeapon::AWeapon(const AWeapon & a){
	*this = a;
}

AWeapon & AWeapon::operator= (const AWeapon &rhs) {
	if (this != &rhs) {
		_name = rhs.getName();
		_apcost = rhs.getAPCost();
		_damage = rhs.getDamage();
	}
	return (*this);
}

std::string AWeapon::getName() const {
	return _name;
}

int AWeapon::getAPCost() const {
	return _apcost;
}

int AWeapon::getDamage() const {
	return _damage;
}
