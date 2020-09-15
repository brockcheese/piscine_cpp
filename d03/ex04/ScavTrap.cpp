#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
	_ep = 50;
	_maxep = 50;
	_name = name;
	_mad = 20;
	_rad = 15;
	_adr = 3;
	puts("Hey Buddy. I'm a ScavTrap. Happy to be alive. Beep Boop.");
	return;
}

ScavTrap::ScavTrap() {}

ScavTrap::~ScavTrap() {
	puts("Oh you're killing me. That's fine. I never was worth much anyway. Bye");
	return;
}

ScavTrap::ScavTrap(const ScavTrap & a) {
	puts("Oh. Hey there. I'm the same guy as the other guy.");
	*this = a;
	return;
}

ScavTrap & ScavTrap::operator = (const ScavTrap & rhs) {
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

void ScavTrap::rangedAttack(std::string const & target) {
	std::cout << "SC4V-TP " << _name << " attacks " << target << " at range, causing " << _rad << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
	std::cout << "SC4V-TP " << _name << " attacks " << target << " at melee, causing " << _mad << " points of damage !" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	if (_ep < 25)
		puts("You don't have enough energy to do this.");
	else {
		_ep -= 25;
		std::string name[] = {"yodeling", "house of cards", "juggling", "who can break the most bones", "crying"};
		srand(time(NULL));
		int index = rand() % 5;
		std::cout << "SC4V-TP " << _name << " challenges " << target << " to a " << name[index] << " competition !" << std::endl;
	}
}
