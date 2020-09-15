/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpace <bpace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 10:59:10 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/19 14:57:49 by bpace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render.hpp"



int render(GameWorld *gw)
{
	//raw();						// Line buffering disabled
	clear();
	gw->renderEnemies();
	mvprintw(gw->getPlayer()->_y_cord, gw->getPlayer()->_x_cord, "%c", gw->getPlayer()->getSymbol()); //why can't i get this to work with the object?
	wrefresh(stdscr);			        // Print it on to the real screen, only refreshes what's been changed, important

	return 0;
}

GameWorld* makeWindow(Player *player) {
	int max_col;
	int max_row;
	initscr();		// Startd curses mode, important
	getmaxyx(stdscr, max_col, max_row); 		//gives the number of columns and the number of rows in a given window
	player->StartPosition(max_col, max_row);
	GameWorld *gm = new GameWorld(player, max_row, max_col);

//	resize_term(max_row, max_col);
	//populate(max_row, max_col);
	return (gm);
}
