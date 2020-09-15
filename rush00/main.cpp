/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpace <bpace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 10:59:02 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/19 15:48:58 by bpace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GameWorld.hpp"
#include "input.hpp"
#include "render.hpp"
#include "coreGameLogic.hpp"

/*
int deathMenu()
{
	noecho();
    cbreak();
    nodelay(stdscr, TRUE);
    keypad(stdscr, TRUE);
    curs_set(0);
	return(0);
}
*/

int collisionGrid ()
{
	//object 1 vs object 2 
	// if same = collision
	return(0);
}

int randomizer (int num)
{
	srand(time(NULL));
    int ans = rand() % num;
    return (ans);
}

int enemyLogic (GameWorld *gw)
{
	// for (int i = 0; i < 1000; i++) 
	// {}
		usleep(33000);
		gw->addEnemy(new Enemy('X', gw->getMaxX()));
		if (randomizer(10) == 1) {
			gw->addEnemy(new Enemy('X', gw->getMaxX()));
		}
		gw->updateEnemies();
    return (0);
}

int coreGameLogic (GameWorld *gw)
{
	enemyLogic(gw);
	return (0);
}

int gamePlaying (GameWorld *gw)
{
	int input = 0;
	while (input != 'q') //or until you die
	{
		input = gameInput(gw);
		if (gw->getPlayer()->_hit_points <= 0)
			printw("you have died");
		coreGameLogic(gw);
		render(gw);
	}
	return (0);
}

int main()
{
	Player player1('^');
	GameWorld *gm = makeWindow(&player1); // created funciton for organization, see render.cpp
	gamePlaying(gm);
	//gameInput(gm);  // created function for organization, see input.cpp
	//enemyLogic(gm);
	endwin();			  // Exit curses mode, important or else strangeness
	return (0);
}
