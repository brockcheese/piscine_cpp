#ifndef GAME_WORLD_HPP
#define GAME_WORLD_HPP

#include "GameObject.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Projectile.hpp"

class Player;
class Enemy;

class GameWorld {
    private:
		Enemy* _ea [20];
		Player* _player;
		int _maxX;
		int _maxY;
	public:
		GameWorld(Player* player, int maxX, int maxY);
		GameWorld();
		~GameWorld();
		GameWorld(const GameWorld &);
		GameWorld & operator = (const GameWorld &);
		void addEnemy(Enemy* e);
		int getMaxX() const;
		int getMaxY() const;
		Player* getPlayer() const;
		void updateEnemies();
		void renderEnemies() const;
};

#endif