#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	puts("Gaaah. Me want smash heads !");
}

SuperMutant::~SuperMutant() {
	puts("Aaargh ...");
}

SuperMutant::SuperMutant(const SuperMutant & s) {
	*this = s;
}

SuperMutant & SuperMutant::operator= (const SuperMutant &rhs) {
	if (this != &rhs) {
		_hp = rhs.getHP();
		_type = rhs.getType();
	}
	return (*this);
}

void SuperMutant::takeDamage(int d) {
	d -= 3;
	if (d > 0) {
		_hp -= d;
		if (_hp < 0)
			_hp = 0;
	}
}
