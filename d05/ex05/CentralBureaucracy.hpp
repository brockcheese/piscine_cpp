#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP

#include "OfficeBlock.hpp"

class CentralBureaucracy {
	typedef struct s_node
	{
		std::string		name;
		struct s_node	*next;
	}					t_node;
	t_node* _queue;
	OfficeBlock* _office[20];

public:
	CentralBureaucracy();
	~CentralBureaucracy();
	CentralBureaucracy(const CentralBureaucracy &);
	CentralBureaucracy & operator = (const CentralBureaucracy &);
	void feedBureaucrat(Bureaucrat &b);
	void queueUp(std::string name);
	void doBureaucracy();
};

#endif
