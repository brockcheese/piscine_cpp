#include <string>
#include <iostream>

class AWeapon
{
	protected:
		std::string _name;
		int _damage;
		int _apcost;

	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon();
		~AWeapon();
		AWeapon(const AWeapon &);
		AWeapon & operator = (const AWeapon &);
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};
