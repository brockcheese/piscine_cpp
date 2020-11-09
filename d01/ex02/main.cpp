#include "ZombieEvent.hpp"

//program that makes zombies and zombievents

int		main() {
	Zombie *first; //initialize zombies
	Zombie *second;
	ZombieEvent brainalert; //initialize zombie event

	first = brainalert.newZombie("Barbrah"); //creates new zombie
	first->announce(); //have zombie announce itself
	delete first; //free zombie
	brainalert.setZombieType("clicker"); //change zombie type
	second = brainalert.randomChump(); //create random zombie
	delete second; //free zombie
	return (0); //end program
}
