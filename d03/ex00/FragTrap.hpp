#include <string>
#include <iostream>

class FragTrap {
	int _hp;
	int _maxhp;
	int _ep;
	int _maxep;
	int _lvl;
	std::string _name;
	int _mad;
	int _rad;
	int _adr;

public:
	FragTrap(std::string name);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap&);
	FragTrap & operator = (const FragTrap & );
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

	int gethp() const;
	int getmaxhp()const;
	int getep()const;
	int getmaxep()const;
	int getlvl()const;
	std::string getname()const;
	int getmad()const;
	int getrad()const;
	int getadr()const;
};
