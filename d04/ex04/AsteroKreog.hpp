#ifndef ASTEROKREOG_HPP
#define ASTEROKREOG_HPP

#include "IAsteroid.hpp"

class AsteroBocal : public IAsteroid {
public:
	AsteroBocal();
	~AsteroBocal();
	AsteroBocal(const AsteroBocal &);
	AsteroBocal & operator = (const AsteroBocal &);
	std::string beMined(DeepCoreMiner *) const;
	std::string beMined(StripMiner *) const;
	std::string getName() const;
};

#endif
