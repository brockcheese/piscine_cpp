#include "GameWorld.hpp"

GameWorld::GameWorld(Player *player, int maxX, int maxY) {
	_player = player;
	_maxX = maxX;
	_maxY = maxY;
	for (int i = 0; i < 20; i++) {
		_ea[i] = NULL;
	}
}

GameWorld::GameWorld() {
	for (int i = 0; i < 20; i++) {
		_ea[i] = NULL;
	}
}

GameWorld::~GameWorld() {
	for (int i = 0; i < 20; i++) {
		if (_ea[i] != NULL)
			delete _ea[i];
	}
}

GameWorld::GameWorld(const GameWorld &gw) {
	for (int i = 0; i < 20; i++) {
		if (_ea[i] != NULL)
			delete _ea[i];
	}
	*this = gw;
}

GameWorld & GameWorld::operator = (const GameWorld &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 20; i++) {
			if (_ea[i] != NULL)
				delete _ea[i];
		}
		for (int i = 0; i < 20; i++) {
			_ea[i] = rhs._ea[i];
		}
	}
	return (*this);
}

void GameWorld::addEnemy (Enemy *e){
	for (int i = 0; i < 20; i++) {
		if (_ea[i] == NULL) {
			_ea[i] = e;
			return;
		}
	}
}

int GameWorld::getMaxX() const{
	return _maxX;
}

int GameWorld::getMaxY() const{
	return _maxY;
}

Player* GameWorld::getPlayer() const {
	return _player;
}

void GameWorld::updateEnemies()
{
	for (int i = 0; i < 20; i++)
	{
		if (_ea[i] != NULL)
		{
			_ea[i]->_y_cord++;
			if (_ea[i]->_y_cord > _maxY)
			{
				delete (_ea[i]);
				_ea[i] = NULL;
			}
		}
	}
}

void GameWorld::renderEnemies() const {
	for (int i = 0; i < 20; i++) {
		if (_ea[i] != NULL)
			mvprintw(_ea[i]->_y_cord, _ea[i]->_x_cord, "%c", _ea[i]->getSymbol());
	}
}