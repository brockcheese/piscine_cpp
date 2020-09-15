#include "Squad.hpp"

class TacticalMarine : virtual public ISpaceMarine {
public:
	TacticalMarine();
	~TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	TacticalMarine & operator = (const TacticalMarine &);
	TacticalMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const ;
};
