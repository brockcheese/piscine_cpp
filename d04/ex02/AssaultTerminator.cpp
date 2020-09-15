#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator () {
	puts("* teleports from space *");
}

AssaultTerminator::~AssaultTerminator() {
	puts("I'll be back ...");
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &t) {
	*this = t;
}

AssaultTerminator & AssaultTerminator::operator= (const AssaultTerminator &) {
	return (*this);
}

void AssaultTerminator::battleCry () const {
	puts("This code is unclean. PURIFY IT !");
}

void AssaultTerminator::rangedAttack () const {
	puts("* does nothing *");
}

void AssaultTerminator::meleeAttack () const {
	puts("* attacks with chainfists *");
}

AssaultTerminator* AssaultTerminator::clone() const {
	return (new AssaultTerminator(*this));
}
