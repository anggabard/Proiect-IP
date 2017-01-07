#include "SDL.h"
#include <iostream>

#define fps 60

using namespace std;

void frana_frame(Uint32 moment_zero)
{
	if ((1000 / fps) > SDL_GetTicks() - moment_zero)
		SDL_Delay((1000 / fps) - (SDL_GetTicks() - moment_zero));
}

void adauga_img_aici(SDL_Surface * img, int x, int y, SDL_Surface * dest)
{
	img->clip_rect.x = x;
	img->clip_rect.y = y;
	SDL_BlitSurface(img, NULL, dest, &img->clip_rect);
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
	
	SDL_Surface *BG = SDL_LoadBMP("BG.bmp");
	SDL_Rect coordonateBG = BG->clip_rect;
	SDL_BlitSurface(BG, NULL, ecran, &coordonateBG);

	SDL_Surface *Joc_nou = SDL_LoadBMP("joc_nou.bmp");
	adauga_img_aici(Joc_nou, latime_ecran / 2 - Joc_nou->clip_rect.w / 2, lungime_ecran / 2 - Joc_nou->clip_rect.h / 2 - 100, ecran);

	SDL_Surface *iesire = SDL_LoadBMP("iesire.bmp");
	adauga_img_aici(iesire, latime_ecran / 2 - iesire->clip_rect.w / 2, lungime_ecran / 2 - iesire->clip_rect.h / 2 + 100, ecran);

	
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
			
		}
		
		
		SDL_UpdateWindowSurface(fereastra);
		frana_frame(moment_zero);
	}

	SDL_DestroyWindow(fereastra);

	SDL_Quit();
	return 0;
}