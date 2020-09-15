#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) :
	_hp(hp),
	_type(type)
{}

Enemy::Enemy() {}

Enemy::~Enemy() {}

Enemy::Enemy(const Enemy &e) {
	*this = e;
}

Enemy & Enemy::operator= (const Enemy &e) {
	if (this != &e) {
		_hp = e.getHP();
		_type = e.getType();
	}
	return (*this);
}

std::string Enemy::getType() const {
	return _type;
}

int Enemy::getHP() const {
	return _hp;
}

void Enemy::takeDamage(int d) {
	if (d > 0) {
		_hp -= d;
		if (_hp < 0)
			_hp = 0;
	}
}
