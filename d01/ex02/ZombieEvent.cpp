#include "ZombieEvent.hpp"

//default constructor for ZombieEvent

ZombieEvent::ZombieEvent() :
	_type("Walker")
{
	return;
}

//default destructor for ZombieEvent

ZombieEvent::~ZombieEvent() {
	return;
}

//returns a new zombie from the zombie event

Zombie*	ZombieEvent::newZombie(std::string name) {
	return (new Zombie(_type, name)); //return a zombie using name passed
}

//sets the zombie type for the zombie event

void	ZombieEvent::setZombieType(std::string type) {
	_type = type; //sets type to type passed
}

//creates a random zombie from a list of names

Zombie*	ZombieEvent::randomChump() {
	std::string name[] = {"Zaddy", "Baby Boi", "Big Cat", "Little Puss", "Zomboni", "Big Chungus", "seven", "Ceci n'est pas une pipe", "Rick Grimes", "Otto"};
	int			i; //stores random number
	Zombie 		*zombo; //declares zombie to return

	srand(time(NULL)); //seeds to the current time
	i = rand() % 10; //intitializes i to a random number 0-9
	zombo = new Zombie(_type, name[i]); //creates a new zombie
	zombo->announce(); //have zombie announce itself
	return (zombo); //return newly created zombie
}
