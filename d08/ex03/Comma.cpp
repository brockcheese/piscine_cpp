#include "Comma.hpp"

Comma::Comma() {}

Comma::~Comma() {}

Comma::Comma(const Comma &d) {
	*this = d;
}

Comma & Comma::operator = (const Comma &) {
	return *this;
}

void Comma::execute(char **ptr) const {
	**ptr=getchar();
}
