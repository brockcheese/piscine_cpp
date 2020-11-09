#include "Pony.hpp"

//default constructor

Pony::Pony() :
	_name("Default Pony"),
	_age(0),
	_nblegs(4)
{ //print pony data
	std::cout <<
		"Neigh, who goes there? I am " << _name <<
		", a " << _age <<
		" year old pony with " << _nblegs <<
		" remaining legs left." << std::endl;
	return; //end function
}

//constructor

Pony::Pony(std::string name, int age, int nblegs) :
	_name(name),
	_age(age),
	_nblegs(nblegs)
{ //print pony data
	std::cout <<
		"Neigh, who goes there? I am " << _name <<
		" a " << _age <<
		" year old pony with " << _nblegs <<
		" remaining legs left." << std::endl;
	return; //end function
}

//default destructor

Pony::~Pony() { //prints destructor message
	puts("Why have you forsaken me? You know ponies don't go to heaven.");
	return; //end function
}

//remove one of the pony's legs

void Pony::removeLeg() {
	if (_nblegs > 0) //if pony has legs remove leg
	{
		puts("Removing Leg:");
		_nblegs--;
	}
	//print pony statement depending on number of legs left
	if (_nblegs == 3)
		puts("Tis but a scratch");
	if (_nblegs == 2)
		puts("It's just a flesh wound");
	if (_nblegs == 1)
		puts("Alright. We'll call it a draw");
	if (_nblegs == 0)
		puts("I'll bite your legs off!");
}

//returns the name of a pony

std::string Pony::getName() {
	return (_name); //return pony name
}

//returns the age of a pony

int Pony::getAge() {
	return (_age); //return pony age
}

//returns the number of legs on a pony

int Pony::getnbLegs() {
	return (_nblegs); //return number of legs on a pony
}
