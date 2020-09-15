#include "AsteroKreog.hpp"

AsteroBocal::AsteroBocal () {}

AsteroBocal::~AsteroBocal() {}

AsteroBocal::AsteroBocal(const AsteroBocal &bs) {
	*this = bs;
}

AsteroBocal & AsteroBocal::operator = (const AsteroBocal &) {
	return (*this);
}

std::string AsteroBocal::beMined(DeepCoreMiner *) const {
	return("Thorite");
}

std::string AsteroBocal::beMined(StripMiner *) const {
	return("Flavium");
}

std::string AsteroBocal::getName() const {
	return("AsteroBocal");
}
