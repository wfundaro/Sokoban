#include "Game.h"
//Initialize singleton
Game* Game::game = NULL;

Game* Game::getInstance() {
	if (!Game::game) {
		Game::game = new Game();
	}
	return Game::game;
}

void Game::run() {

	ALLEGRO_FONT* font = al_create_builtin_font();
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_text(font, al_map_rgb(255, 255, 255), 400, 300, ALLEGRO_ALIGN_CENTER, "Welcome to Allegro!");
	al_flip_display();
	al_rest(5.0);
}

int Game::init(const int width, const int height, const int displayFlag) {
	//Initial allegro
	if (!al_init()) {
		return 1;
	}
	if (!al_init_font_addon()) {
		return 2;
	}



	//display = std::make_unique<Display>(Display(800, 600));
	al_set_new_display_flags(displayFlag);
	display = Display(width, height);
	return 0;
}