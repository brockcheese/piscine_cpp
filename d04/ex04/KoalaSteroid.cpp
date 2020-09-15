#include "KoalaSteroid.hpp"

BocalSteroid::BocalSteroid () {}

BocalSteroid::~BocalSteroid() {}

BocalSteroid::BocalSteroid(const BocalSteroid &bs) {
	*this = bs;
}

BocalSteroid & BocalSteroid::operator = (const BocalSteroid &) {
	return (*this);
}

std::string BocalSteroid::beMined(DeepCoreMiner *) const {
	return("Zazium");
}

std::string BocalSteroid::beMined(StripMiner *) const {
	return("Krpite");
}

std::string BocalSteroid::getName() const {
	return("BocalSteroid");
}
