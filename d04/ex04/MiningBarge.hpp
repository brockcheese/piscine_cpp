#ifndef MININGBARGE_HPP
#define MININGBARGE_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class MiningBarge
{
	private:
		IMiningLaser* _zero;
		IMiningLaser* _one;
		IMiningLaser* _two;
		IMiningLaser* _three;

	public:
		MiningBarge();
		~MiningBarge();
		MiningBarge(const MiningBarge &);
		MiningBarge & operator = (const MiningBarge &);
		void equip(IMiningLaser*);
		void mine(IAsteroid*) const;
};

#endif
