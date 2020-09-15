#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	puts("* click click click *");
}

RadScorpion::~RadScorpion() {
	puts("* SPROTCH *");
}

RadScorpion::RadScorpion(const RadScorpion & s) {
	*this = s;
}

RadScorpion & RadScorpion::operator= (const RadScorpion &rhs) {
	if (this != &rhs) {
		_hp = rhs.getHP();
		_type = rhs.getType();
	}
	return (*this);
}
