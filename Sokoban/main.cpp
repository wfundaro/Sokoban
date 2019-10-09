#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include "Game.h"
#include <iostream>

int main()
{
	Game* game = Game::getInstance();
	//Init size of screen and display flag ALLEGRO_WINDOWED by default
	game->init(800, 600);
	game->run();
	return 0;
}