#include "HumanA.hpp"

class HumanB {
	std::string _name;
	Weapon*	_weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon& weapon);
	void	attack();
};
