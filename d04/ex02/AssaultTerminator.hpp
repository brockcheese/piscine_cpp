#include "TacticalMarine.hpp"

class AssaultTerminator : virtual public ISpaceMarine {
public:
	AssaultTerminator();
	~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator & operator = (const AssaultTerminator &);
	AssaultTerminator* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const ;
};
