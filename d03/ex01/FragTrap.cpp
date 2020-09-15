#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
	_hp(100),
	_maxhp(100),
	_ep(100),
	_maxep(100),
	_lvl(1),
	_name(name),
	_mad(30),
	_rad(20),
	_adr(5)
{
	puts("Beep boop I have been created. [insert hilarious and not overdone videogame reference here]");
	return;
}

FragTrap::FragTrap() {
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

void FragTrap::takeDamage(unsigned int amount) {
	amount -= _adr;
	_hp -= amount;
	if (_hp < 0) {
		amount += _hp;
		_hp = 0;
	}
	std::cout << "FR4G-TP " << _name << " takes " << amount << " damage leaving it with " << _hp << " out of " << _maxhp << " hit points !" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	_hp += amount;
	if (_hp > _maxhp) {
		amount -= _hp - _maxhp;
		_hp = _maxhp;
	}
	std::cout << "FR4G-TP " << _name << " repairs " << amount << " health leaving it with " << _hp << " out of " << _maxhp << " hit point !" << std::endl;
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

int FragTrap::gethp() const {
	return _hp;
}

int FragTrap::getmaxhp() const {
	return _maxhp;
}

int FragTrap::getep() const{
	return _ep;
}

int FragTrap::getmaxep() const{
	return _maxep;
}

int FragTrap::getlvl() const{
	return _lvl;
}

std::string FragTrap::getname() const{
	return _name;
}

int FragTrap::getmad() const{
	return _mad;
}

int FragTrap::getrad() const{
	return _rad;
}

int FragTrap::getadr() const{
	return _adr;
}
