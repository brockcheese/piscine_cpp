#include "ZombieHorde.hpp"

//program that creates a horde of zombies and and announces them at once

int		main() {
	ZombieHorde	horde{4}; //declare ZombieHorde

	horde.announce(); //have horde announce themselves
	return (0); //end program
}
