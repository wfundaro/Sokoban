#pragma once
#include <memory>
#include <allegro5/allegro.h>

class Game
{
public :
	static Game* getGameInstance() {
		if (!game) {
			game = new Game();
		}
		return game;
	}

private :
	Game();


private:
	static Game* game;
	std::unique_ptr<ALLEGRO_DISPLAY, void(*)(ALLEGRO_DISPLAY*)> display;
};

