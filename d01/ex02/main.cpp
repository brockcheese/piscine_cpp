#include "ZombieEvent.hpp"

int		main() {
	Zombie *first;
	Zombie *second;
	ZombieEvent brainalert;

	first = brainalert.newZombie("Barbrah");
	first->announce();
	delete first;
	brainalert.setZombieType("clicker");
	second = brainalert.randomChump();
	delete second;
	return (0);
}
