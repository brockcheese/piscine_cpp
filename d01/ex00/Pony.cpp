#include "Pony.hpp"

Pony::Pony() :
	_name("Default Pony"),
	_age(0),
	_nblegs(4)
{
	std::cout <<
		"Neigh, who goes there? I am " << _name <<
		", a " << _age <<
		" year old pony with " << _nblegs <<
		" remaining legs left." << std::endl;
	return;
}

Pony::Pony(std::string name, int age, int nblegs) :
	_name(name),
	_age(age),
	_nblegs(nblegs)
{
	std::cout <<
		"Neigh, who goes there? I am " << _name <<
		" a " << _age <<
		" year old pony with " << _nblegs <<
		" remaining legs left." << std::endl;
	return;
}

Pony::~Pony() {
	puts("Why have you forsaken me? You know ponies don't go to heaven.");
	return;
}

void Pony::removeLeg() {
	if (_nblegs > 0)
	{
		puts("Removing Leg:");
		_nblegs--;
	}
	if (_nblegs == 3)
		puts("Tis but a scratch");
	if (_nblegs == 2)
		puts("It's just a flesh wound");
	if (_nblegs == 1)
		puts("Alright. We'll call it a draw");
	if (_nblegs == 0)
		puts("I'll bite your legs off!");
}

std::string Pony::getName() {
	return (_name);
}

int Pony::getAge() {
	return (_age);
}

int Pony::getnbLegs() {
	return (_nblegs);
}
