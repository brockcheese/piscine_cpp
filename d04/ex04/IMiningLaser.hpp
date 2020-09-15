#ifndef IMININGLASER_HPP
#define IMININGLASER_HPP

#include <iostream>
#include <string>
#include "IAsteroid.hpp"

class IMiningLaser
{
	public:
		virtual ~IMiningLaser() {}
		virtual void mine(IAsteroid*) = 0;
};

#endif
