#include "Increment.hpp"

Increment::Increment() {}

Increment::~Increment() {}

Increment::Increment(const Increment &d) {
	*this = d;
}

Increment & Increment::operator = (const Increment &) {
	return *this;
}

void Increment::execute(char **ptr)const {
	++**ptr;
}
