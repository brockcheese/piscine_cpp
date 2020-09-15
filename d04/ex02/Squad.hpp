#include "ISquad.hpp"

class Squad : virtual public ISquad{
	typedef struct s_node
	{
		ISpaceMarine	*data;
		struct s_node	*next;
	}					t_node;
	int _count;
	t_node* _units;

public:
	Squad();
	~Squad();
	Squad(const Squad &);
	Squad & operator = (const Squad &);
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
};
