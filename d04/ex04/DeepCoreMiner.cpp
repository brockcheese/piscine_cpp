#include <iostream>
#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner() {}

DeepCoreMiner::~DeepCoreMiner() {}

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &dcm) {
	*this = dcm;
}

DeepCoreMiner & DeepCoreMiner::operator= (const DeepCoreMiner &) {
	return (*this);
}

void DeepCoreMiner::mine(IAsteroid* ia) {
	std::cout << "* mining deep ... got " << ia->beMined(this) << " ! *" << std::endl;
}
