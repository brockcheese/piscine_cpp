#include "Zombie.hpp"

class ZombieEvent {
	std::string _type;
public:
	ZombieEvent();
	~ZombieEvent();
	Zombie* newZombie(std::string name);
	void	setZombieType(std::string type);
	Zombie	*randomChump();
};
