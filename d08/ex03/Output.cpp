#include "Output.hpp"

Output::Output() {}

Output::~Output() {}

Output::Output(const Output &d) {
	*this = d;
}

Output & Output::operator = (const Output &) {
	return *this;
}

void Output::execute(char **ptr)const {
	putchar(**ptr);
}
