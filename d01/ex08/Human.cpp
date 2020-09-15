#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {
	std::cout << "I melee attack " << target << std::endl;
}

void	Human::rangedAttack(std::string const & target) {
	std::cout << "I range attack " << target << std::endl;
}

void	Human::intimidatingShout(std::string const & target) {
	std::cout << "I shout intimidatingly at " << target << std::endl;
}

void	Human::action(std::string const & action_name, std::string const & target) {
	dispatch actions[3] = {
		{"meleeAttack", &Human::meleeAttack},
		{"rangedAttack", &Human::rangedAttack},
		{"intimidatingShout", &Human::intimidatingShout}
	};

	for (int i = 0; i < 3; i++) {
		if (!action_name.compare(actions[i].name))
			(this->*actions[i].func)(target);
	}
}
