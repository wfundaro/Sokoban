#include "Display.h"

Display::Display(int width, int height) : display(nullptr, al_destroy_display) {
	display = std::unique_ptr<ALLEGRO_DISPLAY, void(*)(ALLEGRO_DISPLAY*)>(al_create_display(width, height), al_destroy_display);
}

Display::Display() : display(nullptr, al_destroy_display) {
	
}
