#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon{

public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle&);
	PlasmaRifle & operator = (const PlasmaRifle&);
	void attack() const;
};
