#include <string>
#include <iostream>

class ClapTrap {
protected:
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
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap& operator = (const ClapTrap & );
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

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
