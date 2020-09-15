#include "Sorcerer.hpp"

class Peon : virtual public Victim{
private:
	Peon();

public:
	Peon(std::string name);
	~Peon();
	Peon(const Peon &);
	Peon & operator= (const Peon &);
	void getPolymorphed() const;
};
