#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde (int N) :
	_n(N)
{
	std::string name[] = {"Zaddy", "Baby Boi", "Big Cat", "Little Puss", "Zomboni", "Big Chungus", "seven", "Ceci n'est pas une pipe", "Rick Grimes", "Otto"};
	int			index;
	_zombies = new Zombie[N];
	srand(time(NULL));
	for (int i = 0; i < N; i++) {
		index = rand() % 10;
		_zombies[i].setType("Horde");
		_zombies[i].setName(name[index]);
	}
	return;
}

ZombieHorde::~ZombieHorde() {
	delete[] _zombies;
	return;
}

void ZombieHorde::announce() {
	for (int i = 0; i < _n; i++) {
		_zombies[i].announce();
	}
}
