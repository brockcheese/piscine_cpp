#include <iostream>
#include "StripMiner.hpp"

StripMiner::StripMiner() {}

StripMiner::~StripMiner() {}

StripMiner::StripMiner(const StripMiner &dcm) {
	*this = dcm;
}

StripMiner & StripMiner::operator= (const StripMiner &) {
	return (*this);
}

void StripMiner::mine(IAsteroid* ia) {
	std::cout << "* strip mining ... got " << ia->beMined(this) << " ! *" << std::endl;
}
