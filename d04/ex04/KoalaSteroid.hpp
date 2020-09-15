#ifndef KOALASTEROID_HPP
#define KOALASTEROID_HPP

#include "IAsteroid.hpp"

class BocalSteroid : public IAsteroid {
	public:
		BocalSteroid();
		~BocalSteroid();
		BocalSteroid(const BocalSteroid &);
		BocalSteroid & operator = (const BocalSteroid &);
		std::string beMined(DeepCoreMiner*) const;
		std::string beMined(StripMiner*) const;
		std::string getName() const;
};

#endif
