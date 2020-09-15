#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
	_hp(100),
	_maxhp(100),
	_lvl(1)
{
	puts("Hello I am a ClapTrap!");
	return;
}

ClapTrap::~ClapTrap() {
	puts("Welp. I was a ClapTrap");
	return;
}

ClapTrap & ClapTrap::operator = (const ClapTrap & rhs) {
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

void ClapTrap::takeDamage(unsigned int amount) {
	amount -= _adr;
	_hp -= amount;
	if (_hp < 0) {
		amount += _hp;
		_hp = 0;
	}
	std::cout << _name << " takes " << amount << " damage leaving it with " << _hp << " out of " << _maxhp << " hit points !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	_hp += amount;
	if (_hp > _maxhp) {
		amount -= _hp - _maxhp;
		_hp = _maxhp;
	}
	std::cout << _name << " repairs " << amount << " health leaving it with " << _hp << " out of " << _maxhp << " hit point !" << std::endl;
}

int ClapTrap::gethp() const {
	return _hp;
}

int ClapTrap::getmaxhp() const {
	return _maxhp;
}

int ClapTrap::getep() const{
	return _ep;
}

int ClapTrap::getmaxep() const{
	return _maxep;
}

int ClapTrap::getlvl() const{
	return _lvl;
}

std::string ClapTrap::getname() const{
	return _name;
}

int ClapTrap::getmad() const{
	return _mad;
}

int ClapTrap::getrad() const{
	return _rad;
}

int ClapTrap::getadr() const{
	return _adr;
}
