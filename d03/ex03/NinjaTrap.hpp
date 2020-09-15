#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap{

public:
	NinjaTrap(std::string name);
	NinjaTrap();
	~NinjaTrap();
	NinjaTrap(const NinjaTrap&);
	NinjaTrap& operator = (const NinjaTrap & );
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void ninjaShoebox(const ScavTrap&);
	void ninjaShoebox(const NinjaTrap&);
	void ninjaShoebox(const FragTrap&);
	void ninjaShoebox(const ClapTrap&);
};
