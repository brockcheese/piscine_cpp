#include "PlasmaRifle.hpp"

class PowerFist : public AWeapon{

public:
	PowerFist();
	~PowerFist();
	PowerFist(const PowerFist&);
	PowerFist & operator = (const PowerFist&);
	void attack() const;
};
