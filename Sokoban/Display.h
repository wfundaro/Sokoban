#pragma once
#include <memory>
#include <allegro5/allegro.h>

class Display
{
public :
	Display(int width, int height);
	Display();


private:
	std::unique_ptr<ALLEGRO_DISPLAY, void(*)(ALLEGRO_DISPLAY*)> display;
};

