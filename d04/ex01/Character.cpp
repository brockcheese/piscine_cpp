#include "Character.hpp"

Character::Character(std::string const & name) :
	_name(name),
	_ap(40),
	_weapon(NULL)
{}

Character::Character() {}

Character::~Character() {}

Character::Character(const Character &c) {
	*this = c;
}

Character & Character::operator = (const Character &rhs) {
	if (this != &rhs) {
		_name = rhs.getName();
		_ap = rhs._ap;
		_weapon = rhs._weapon;
	}
	return (*this);
}

void Character::recoverAP() {
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon* w) {
	_weapon = w;
}

void Character::attack(Enemy* e) {
	if (_ap >= (*_weapon).getAPCost()) {
		_ap -= (*_weapon).getAPCost();
		if (_weapon != NULL) {
			std::cout << getName() << " attacks " << (*e).getType() << " with a " << (*_weapon).getName() << std::endl;
			(*_weapon).attack();
			(*e).takeDamage((*_weapon).getDamage());
			if ((*e).getHP() <= 0)
				delete(e);
		}
	}
}

std::string Character::getName() const{
	return _name;
}

int Character::getAP() const {
	return _ap;
}

AWeapon* Character::getWeapon() const {
	return _weapon;
}

std::ostream & operator << (std::ostream &o, const Character &c) {
	if (c.getWeapon() == NULL)
		return o << c.getName() << " has " << c.getAP() << " AP and is unarmed" << std::endl;
	return o << c.getName() << " has " << c.getAP() << " AP and wields a " << c.getWeapon()->getName() << std::endl;
}
