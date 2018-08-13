#pragma once
#include "SDL.h"
#include "SDL_image.h"
#include <iostream>

const int MENU_WIDTH = 300;
const int MENU_HEIGHT = 350;
const int DISPLAY_WIDTH = 1000;
const int DISPLAY_HEIGHT = 600;
const int PADDLE_WIDTH = 200;
const int PADDLE_HEIGHT = 60;

class Texture {
public:
	Texture(SDL_Renderer * renderer, double x, double y);
	virtual ~Texture();
	virtual void Render();

	SDL_Renderer * renderer;
	double x, y, xMiddle = x + width / 2.0, yMiddle = y + height / 2.0, xEnd = x + width, yEnd = y + height;
	int width, height;
};