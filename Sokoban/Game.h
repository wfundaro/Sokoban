#pragma once
#include <memory>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include "Display.h"

class Game
{
public :
	/**
	* Singleton Game object
	*/
	static Game* getInstance();
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;

	int init(const int width, const int height, const int flags = ALLEGRO_WINDOWED);
	void run();

	~Game() {};


private:
	Game() {};
	static Game* game;
	//std::unique_ptr<Display> display;
	Display display;
};

