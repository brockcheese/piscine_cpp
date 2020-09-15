#include "SuperMutant.hpp"

class RadScorpion : virtual public Enemy {

public:
	RadScorpion();
	~RadScorpion();
	RadScorpion(const RadScorpion &);
	RadScorpion & operator = (const RadScorpion &);
};
