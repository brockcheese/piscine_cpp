#include "ZombieHorde.hpp"

//zombiehorde constructor

ZombieHorde::ZombieHorde (int N) :
	_n(N)
{
	std::string name[] = {"Zaddy", "Baby Boi", "Big Cat", "Little Puss", "Zomboni", "Big Chungus", "seven", "Ceci n'est pas une pipe", "Rick Grimes", "Otto"};
	int			index; //declares index
	_zombies = new Zombie[N]; //creates zombie array
	srand(time(NULL)); //seeds to current time
	for (int i = 0; i < N; i++) {
		index = rand() % 10; //sets index to random number 0-9
		_zombies[i].setType("Horde"); //sets type to horde
		_zombies[i].setName(name[index]); //sets name to indexed name
	}
	return; //end function
}

//default destructor

ZombieHorde::~ZombieHorde() {
	delete[] _zombies; //free allocated memory for zombies
	return;
}

//have each zombie announce themselves

void ZombieHorde::announce() {
	for (int i = 0; i < _n; i++) {
		_zombies[i].announce(); //each zombie announces itself
	}
}
