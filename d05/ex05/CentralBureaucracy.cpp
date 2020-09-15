#include "CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy() {
	for(int i = 0; i < 20; i++) {
		_office[i] = NULL;
	}
	_queue = NULL;
}

CentralBureaucracy::~CentralBureaucracy() {
	t_node *temp = _queue;
	while (temp) {
		temp = _queue->next;
		delete(_queue);
		_queue = temp;
	}
}

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy &cb) {
	t_node *temp = _queue;
	while (temp) {
		temp = _queue->next;
		delete(_queue);
		_queue = temp;
	}
	*this = cb;
}

CentralBureaucracy & CentralBureaucracy::operator= (const CentralBureaucracy &rhs) {
	if (this != &rhs) {
		t_node *temp = _queue;
		while (temp) {
			temp = _queue->next;
			delete(_queue);
			_queue = temp;
		}
		for(int i = 0; i < 20; i++) {
			_office[i] = rhs._office[i];
		}
		_queue = rhs._queue;
	}
	return(*this);
}

void CentralBureaucracy::feedBureaucrat(Bureaucrat &b) {
	for(int i = 0; i < 20; i++) {
		if (!_office[i]) {
			_office[i] = new OfficeBlock();
			_office[i]->setSigner(b);
			_office[i]->setExecutor(b);
			Intern idiot;
			_office[i]->setIntern(idiot);
			break;
		}
	}
}

void CentralBureaucracy::queueUp(std::string name) {
	t_node* temp = _queue;
	if (temp == NULL) {
		temp = new t_node;
		temp->name = name;
		temp->next = NULL;
		_queue = temp;
	}
	else {
		while(temp->next)
			temp = temp->next;
		temp->next = new t_node;
		temp->next->name = name;
		temp->next->next = NULL;
	}
}

void CentralBureaucracy::doBureaucracy() {
	t_node *temp = _queue;
	while(temp) {
		for (int i = 0; i < 20; i++) {
			srand(time(NULL));
			int ans = rand() % 3;
			if (ans == 0)
				_office[i]->doBureaucracy("presidential pardon", temp->name);
			else if (ans == 1)
				_office[i]->doBureaucracy("robotomy request", temp->name);
			else if (ans == 2)
				_office[i]->doBureaucracy("shrubbery creation", temp->name);
		}
		temp = temp->next;
	}
}
