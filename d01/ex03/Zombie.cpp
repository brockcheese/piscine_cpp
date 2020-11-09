#include "Zombie.hpp"

//zombie constructor

Zombie::Zombie (std::string type, std::string name) :
	_type(type),
	_name(name)
{
	return;
}

//default constructor

Zombie::Zombie () {
	return;
}

//default destructor

Zombie::~Zombie () {
	return;
}

//sets the name of the zombie

void Zombie::setName (std::string name) {
	_name = name;
}

//sets the type of the zombie

void Zombie::setType (std::string type) {
	_type = type;
}

//announce function to declare a zombie

void Zombie::announce() {
	std::cout << "<" << _name << " (" << _type << ")> Braiiiiiiinnnssss..." << std::endl;
}
