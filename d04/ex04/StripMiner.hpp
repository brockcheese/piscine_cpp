#ifndef STRIPMINER_HPP
#define STRIPMINER_HPP

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser {
	public:
		StripMiner();
		~StripMiner();
		StripMiner(const StripMiner &);
		StripMiner & operator = (const StripMiner &);
		void mine(IAsteroid*);
};

#endif
