#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) {
	_ep = 100;
	_maxep = 100;
	_name = name;
	_mad = 30;
	_rad = 20;
	_adr = 5;
	puts("Beep boop I have been created. [insert hilarious and not overdone videogame reference here]");
	return;
}

FragTrap::FragTrap () {
	return;
}

FragTrap::~FragTrap() {
	puts("I am dying. Oh frick. I never even got to play Borderlands!!!");
	return;
}

FragTrap::FragTrap(const FragTrap & a) {
	puts("Beep boop a copy has been created. I am as unoriginal as the humor my creator wishes to display.");
	*this = a;
	return;
}

FragTrap & FragTrap::operator = (const FragTrap & rhs) {
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

void FragTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at range, causing " << _rad << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << _name << " attacks " << target << " at melee, causing " << _mad << " points of damage !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (_ep < 25)
		puts("You don't have enough energy to do this.");
	else {
		_ep -= 25;
		std::string name[] = {"poopy", "spray", "Gwenyth Paltrow's goop", "attack", "insinuation"};
		srand(time(NULL));
		int index = rand() % 5;
		std::cout << "FR4G-TP " << _name << " attacks " << target << " using " << name[index] << " attack, causing " << rand() % 100 << " points of damage !" << std::endl;
	}
}
