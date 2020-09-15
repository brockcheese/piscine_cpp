#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) {
	_ep = 120;
	_maxep = 120;
	_name = name;
	_mad = 60;
	_rad = 20;
	_adr = 5;
	puts("A superior challenger has arrived !");
	return;
}

SuperTrap::SuperTrap() {}

SuperTrap::~SuperTrap() {
	puts("Not so super after all :(");
	return;
}

SuperTrap::SuperTrap(const SuperTrap & a) {
	puts("Twice the Power, Double the strength");
	*this = a;
	return;
}

SuperTrap & SuperTrap::operator = (const SuperTrap & rhs) {
	if (this != &rhs) {
		_hp = rhs.gethp();
		_maxhp = rhs.getmaxhp();
		_ep = rhs.getep();
		_maxep = rhs.getmaxep();
		_lvl = rhs.getlvl();
		_name = rhs.getname();
		_mad = rhs.getmad();
		_rad = rhs.getrad();
		_adr = rhs.getadr();
	}
	return (*this);
}

void SuperTrap::rangedAttack(std::string const &target) {
	return (FragTrap::rangedAttack(target));
}

void SuperTrap::meleeAttack(std::string const &target) {
	return (NinjaTrap::meleeAttack(target));
}
