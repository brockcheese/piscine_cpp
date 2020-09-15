#include "RadScorpion.hpp"

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon* _weapon;

	public:
		Character(std::string const & name);
		Character();
		~Character();
		Character(const Character &);
		Character & operator = (const Character &);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		int getAP() const;
		AWeapon* getWeapon() const;
};

std::ostream & operator << (std::ostream &o, const Character &);
