#include "Human.hpp"

//default constructor

Human::Human () {
	return;
}

//default destructor

Human::~Human() {
	return;
}

//returns brain

Brain		Human::getBrain() {
	return(_brain);
}

//identifies human through brain class

std::string Human::identify() {
	return(_brain.identify());
}
