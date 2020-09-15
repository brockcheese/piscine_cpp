#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	puts("Tactical Marine ready for battle");
}

TacticalMarine::~TacticalMarine() {
	puts("Aaargh ...");
}

TacticalMarine::TacticalMarine(const TacticalMarine &t) {
	*this = t;
}

TacticalMarine & TacticalMarine::operator= (const TacticalMarine &) {
	return (*this);
}

TacticalMarine* TacticalMarine::clone() const {
	return (new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const {
	puts("For the holy PLOT !");
}

void TacticalMarine::rangedAttack() const{
	puts("* attacks with bolter *");
}

void TacticalMarine::meleeAttack() const {
	puts("* attacks with chainsword *");
}
