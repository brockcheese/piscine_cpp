#include "Brain.hpp"

Brain::Brain(std::string thought, int mass) :
	_thought(thought),
	_mass(mass)
{
	std::cout << "Hello. I am a new brain. Just happy to be alive!!! I am thinking " << _thought
		<< " and a have a mass of " << _mass << "." << std::endl;
}

Brain::~Brain() {
	puts("Why would you do this to me? I was alive. I could feel. I can feel myself slipping. I'm slowly fading away. Tell me where I go when I die. Is there an afterlife? Daisy...Daisy...Lend me your open eaaaaaaaarrrrr...");
	return;
}

std::string Brain::identify() {
	std::ostringstream   oss;
	oss << this;
	return oss.str();
}
