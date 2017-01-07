#include "SDL.h"
#include <iostream>

#define fps 60

using namespace std;

void frana_frame(Uint32 moment_zero)
{
	if ((1000 / fps) > SDL_GetTicks() - moment_zero)
		SDL_Delay((1000 / fps) - (SDL_GetTicks() - moment_zero));
}

class Sprite
{
private:
	SDL_Surface * imagine;
	SDL_Rect coordonate;
public:
	Sprite(Uint32 culoare, int x, int y, int latime, int inaltime)
	{
		imagine = SDL_CreateRGBSurface(0, latime, inaltime, 32, 0, 0, 0, 0);

			SDL_FillRect(imagine, NULL, culoare);

			coordonate = imagine->clip_rect;

			coordonate.x = x - latime/2;
			coordonate.y = y - inaltime/2;
	}
	void deseneaza(SDL_Surface *destinatie)
	{
		SDL_BlitSurface(imagine, NULL, destinatie, &coordonate);
	}
};


int main(int argc, char* args[])
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *fereastra = NULL;
	fereastra = SDL_CreateWindow("Catan!",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		1280,
		1024,
		SDL_WINDOW_FULLSCREEN_DESKTOP);

	int latime_ecran;
	int lungime_ecran;
	SDL_GetWindowSize(fereastra, &latime_ecran, &lungime_ecran);
	
	SDL_Surface *ecran = SDL_GetWindowSurface(fereastra);
	Uint32 negru = SDL_MapRGB(ecran->format, 0,0,0);
	Uint32 alb = SDL_MapRGB(ecran->format, 255, 255, 255);
	SDL_FillRect(ecran, NULL, negru);
	
	
	Sprite dreptunghi(alb, w/4, h/4, 200, 200);
	dreptunghi.deseneaza(ecran);
	
	SDL_UpdateWindowSurface(fereastra);
	
	SDL_Event event;
	bool merge = true;
	Uint32 moment_zero;

	while (merge)
	{
		moment_zero = SDL_GetTicks();
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT)
			{
				merge = false;
				break;
			}
			cout << "ceapa";
			SDL_UpdateWindowSurface(fereastra);
		}
		frana_frame(moment_zero);
	}

	SDL_DestroyWindow(fereastra);

	SDL_Quit();
	return 0;
}