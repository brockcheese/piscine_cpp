#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() :
	_type("Walker")
{
	return;
}

ZombieEvent::~ZombieEvent() {
	return;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	return (new Zombie(_type, name));
}

void	ZombieEvent::setZombieType(std::string type) {
	_type = type;
}

Zombie*	ZombieEvent::randomChump() {
	std::string name[] = {"Zaddy", "Baby Boi", "Big Cat", "Little Puss", "Zomboni", "Big Chungus", "seven", "Ceci n'est pas une pipe", "Rick Grimes", "Otto"};
	int			i;
	Zombie 		*zombo;

	srand(time(NULL));
	i = rand() % 10;
	zombo = new Zombie(_type, name[i]);
	zombo->announce();
	return (zombo);
}
