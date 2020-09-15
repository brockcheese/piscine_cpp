#include "Zombie.hpp"

class ZombieHorde {
	Zombie*	_zombies;
	int		_n;
public:
	ZombieHorde(int N);
	~ZombieHorde();
	void announce();
};
