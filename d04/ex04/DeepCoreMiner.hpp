#ifndef DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser {
	public:
		DeepCoreMiner();
		~DeepCoreMiner();
		DeepCoreMiner(const DeepCoreMiner &);
		DeepCoreMiner & operator = (const DeepCoreMiner &);
		void mine(IAsteroid*);
};

#endif
