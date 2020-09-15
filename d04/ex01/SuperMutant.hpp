#include "Enemy.hpp"

class SuperMutant : virtual public Enemy {

public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(const SuperMutant &);
	SuperMutant & operator = (const SuperMutant &);
	void takeDamage(int);
};
