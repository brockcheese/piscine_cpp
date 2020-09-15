#include "Decrement.hpp"

Decrement::Decrement() {}

Decrement::~Decrement() {}

Decrement::Decrement(const Decrement &d) {
	*this = d;
}

Decrement & Decrement::operator = (const Decrement &) {
	return *this;
}

void Decrement::execute(char **ptr)const{
	--**ptr;
}
