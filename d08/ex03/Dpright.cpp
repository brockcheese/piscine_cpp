#include "Dpright.hpp"

Dpright::Dpright()  {}

Dpright::~Dpright() {}

Dpright::Dpright(const Dpright &d) {
	*this = d;
}

Dpright & Dpright::operator = (const Dpright &) {
	return *this;
}

void Dpright::execute(char **ptr) const{
	++*ptr;
}
