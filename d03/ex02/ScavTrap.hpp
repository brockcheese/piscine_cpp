#include "FragTrap.hpp"

class ScavTrap : public ClapTrap{

public:
	ScavTrap(std::string name);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap&);
	ScavTrap& operator = (const ScavTrap & );
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer(std::string const & target);
};
