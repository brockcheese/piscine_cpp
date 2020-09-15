#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	_name(name)
{
	return;
}

HumanB::~HumanB() {
	return;
}

void	HumanB::setWeapon(Weapon& weapon) {
	_weapon = &weapon;
}

void	HumanB::attack() {
	std::cout << _name << " attacks with his " << (*_weapon).getType() << std::endl;
}
