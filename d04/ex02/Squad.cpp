#include "Squad.hpp"

Squad::Squad () :
	_count(0),
	_units(NULL)
{}

Squad::~Squad () {
	t_node *temp = _units;
	while (temp) {
		temp = _units->next;
		delete(_units->data);
		delete(_units);
		_units = temp;
	}
}

Squad::Squad(const Squad &s) {
	for (int i = 0; i < s._count; i++) {
		push(s.getUnit(i));
	}
	_count = s._count;
}

Squad & Squad::operator = (const Squad & s) {
	t_node *temp = _units;
	while (temp) {
		temp = _units->next;
		delete(_units->data);
		delete(_units);
		_units = temp;
	}
	for(int i = 0; i < s.getCount(); i++) {
		push(s.getUnit(i));
	}
	return *this;
}

int Squad::getCount() const {
	return _count;
}

ISpaceMarine* Squad::getUnit(int N) const {
	t_node *temp = _units;
	for (int i = 0; i < _count; i++) {
		if (i == N)
			return (temp->data);
		temp = temp->next;
	}
	return (NULL);
}

int Squad::push(ISpaceMarine* XXX) {
	t_node *temp = _units;
	if (temp == NULL) {
		temp = new t_node;
		temp->data = XXX;
		temp->next = NULL;
		_units = temp;
	}
	else {
		while(temp->next)
			temp = temp->next;
		temp->next = new t_node;
		temp->next->data = XXX;
		temp->next->next = NULL;
	}

	return ++_count;
}
