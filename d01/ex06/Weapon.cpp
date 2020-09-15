#include "Weapon.hpp"

Weapon::Weapon(std::string type) :
	_type(type)
{
	return;
}

Weapon::~Weapon() {
	return;
}

std::string Weapon::getType() {
	const std::string& r = _type;
	return (r);
}

void Weapon::setType(std::string type) {
	_type = type;
}
