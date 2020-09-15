#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) {
	_hp = 60;
	_maxhp = 60;
	_ep = 120;
	_maxep = 120;
	_name = name;
	_mad = 60;
	_rad = 5;
	_adr = 0;
	puts("Out of nowhere. A ninja appeared.");
	return;
}

NinjaTrap::NinjaTrap() {}

NinjaTrap::~NinjaTrap() {
	puts("Ninja ded");
	return;
}

NinjaTrap::NinjaTrap(const NinjaTrap & a) {
	puts("Seeing Double?");
	*this = a;
	return;
}

NinjaTrap & NinjaTrap::operator = (const NinjaTrap & rhs) {
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

void NinjaTrap::rangedAttack(std::string const & target) {
	std::cout << "NINJA-TP " << _name << " attacks " << target << " at range, causing " << _rad << " points of damage !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) {
	std::cout << "NINJA-TP " << _name << " attacks " << target << " at melee, causing " << _mad << " points of damage !" << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap&) {
	puts("Silent as night. But I am quieter.");
}

void NinjaTrap::ninjaShoebox(const FragTrap&) {
	puts("You are but a fragment of your former self.");
}

void NinjaTrap::ninjaShoebox(const ScavTrap&) {
	puts("When I am done with you, they will have to exscavate you like a fossil.");
}

void NinjaTrap::ninjaShoebox(const ClapTrap&) {
	puts("Ready for the clap back?");
}
