#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap&);
	FragTrap& operator = (const FragTrap & );
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void vaulthunter_dot_exe(std::string const & target);
};
