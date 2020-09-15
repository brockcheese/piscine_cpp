#include "Player.hpp"

// ----------- Child Class Player ----------- //
int Player::StartPosition(int max_col, int max_row)
{
	int xPosition = max_row / 2;
	int yPosition = max_col - 1;
	_x_cord = xPosition;
	_y_cord = yPosition;
	return (0);
}

int Player::shoot ()
{
	printw("pew pew");
	return (0);
}


Player::Player(char symbol) : GameObject(symbol)
{}

Player::Player(const Player &PlayerObj)
{
	this->_symbol = PlayerObj._symbol;
}
Player & Player::operator = (const Player &PlayerObj)
{
	this->_symbol = PlayerObj._symbol;
	return (*this);
}
Player::~Player(void)
{
	printw("%c has died!", _symbol);
}