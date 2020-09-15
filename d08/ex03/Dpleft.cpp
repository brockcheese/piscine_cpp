#include "Dpleft.hpp"

Dpleft::Dpleft() {}

Dpleft::~Dpleft() {}

Dpleft::Dpleft(const Dpleft &d) {
	*this = d;
}

Dpleft & Dpleft::operator = (const Dpleft &) {
	return *this;
}

void Dpleft::execute(char **ptr)const {
	--*ptr;
}
