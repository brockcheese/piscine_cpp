#include "PowerFist.hpp"

class Enemy
{
	protected:
		int _hp;
		std::string _type;

	public:
		Enemy(int hp, std::string const & type);
		Enemy();
		virtual ~Enemy();
		Enemy(const Enemy &);
		Enemy & operator = (const Enemy &);
		std::string getType() const;
		int getHP() const;

		virtual void takeDamage(int);
};
