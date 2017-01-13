#include "functi.h"
#include <iostream>
#include "SDL.h"
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

bool este_deasupra(SDL_Rect zona, int x, int y)
{
	if (x > zona.x && x < zona.x + zona.w && y > zona.y && y < zona.y + zona.h)
		return true;
	return false;
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

			coordonate.x = x ;
			coordonate.y = y ;
	}
	void deseneaza(SDL_Surface *destinatie)
	{
		SDL_BlitSurface(imagine, NULL, destinatie, &coordonate);
	}
};

int main(int argc, char* args[])
{
	SDL_Init(SDL_INIT_EVERYTHING);
	cout << "ceapa";
	SDL_Window *fereastra = NULL;
	fereastra = SDL_CreateWindow("Catan!",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		1280,
		1024,
		0);

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

	SDL_Surface *iesire = SDL_LoadBMP("iesire.bmp");
	
	SDL_UpdateWindowSurface(fereastra);
	
	SDL_Event event;
	bool merge = true;
	Uint32 moment_zero;
	bool joc_nou_apasat = false;
	while (merge)
	{
		moment_zero = SDL_GetTicks();
		while (SDL_PollEvent(&event))
		{
			switch (event.type)
			{
			case SDL_KEYDOWN:
			{
								switch (event.key.keysym.sym)
								{
								case SDLK_ESCAPE:
								{
													merge = false;
													break;
								}
								}
								break;

			}
			case SDL_MOUSEMOTION:
			{
										int x = NULL, y = NULL;
										SDL_GetMouseState(&x , &y);
										switch (este_deasupra(Joc_nou->clip_rect, x, y))
										{
											case true:
											{
												SDL_Surface *Joc_nou_selected = SDL_LoadBMP("joc_nou_selected.bmp");
												adauga_img_aici(Joc_nou_selected, latime_ecran / 2 - Joc_nou_selected->clip_rect.w / 2, lungime_ecran / 2 - Joc_nou_selected->clip_rect.h / 2 - 200, ecran);
												SDL_UpdateWindowSurface(fereastra);
														 break;


											}
											case false:
											{
														  switch (este_deasupra(iesire->clip_rect, x, y))
														  {
														  case true:
														  {
																	   SDL_Surface *iesire_selected = SDL_LoadBMP("iesire_selected.bmp");
																	   adauga_img_aici(iesire_selected, latime_ecran / 2 - iesire_selected->clip_rect.w / 2, lungime_ecran / 2 - iesire_selected->clip_rect.h / 2 + 200, ecran);
																	   SDL_UpdateWindowSurface(fereastra);
																	   break;
														  }
														  case false:
														  {
																		SDL_BlitSurface(BG, NULL, ecran, &coordonateBG);
																		adauga_img_aici(Joc_nou, latime_ecran / 2 - Joc_nou->clip_rect.w / 2, lungime_ecran / 2 - Joc_nou->clip_rect.h / 2 - 200, ecran);
																		adauga_img_aici(iesire, latime_ecran / 2 - iesire->clip_rect.w / 2, lungime_ecran / 2 - iesire->clip_rect.h / 2 + 200, ecran);
																		SDL_UpdateWindowSurface(fereastra);
																		break;
														  }
														  default:
															  break;
														  }
											}
											default:
												break;
										}
										break;


			}
			case SDL_MOUSEBUTTONDOWN:
			{
						int x = NULL, y = NULL;
						SDL_GetMouseState(&x, &y);
						if (este_deasupra(iesire->clip_rect, x, y))
							merge = false;
						if (este_deasupra(Joc_nou->clip_rect, x, y))
						{	
							SDL_Surface * fundal = SDL_LoadBMP("Fundal.bmp");
							SDL_FreeSurface(ecran);
							SDL_BlitSurface(fundal, NULL, ecran, &fundal->clip_rect);
							
							creare_harta(m, c);

							Sprite b(negru,c[1].x, c[1].y, 30, 30);
							b.deseneaza(ecran);

							Sprite x(negru,c[2].x, c[2].y, 30, 30);
							x.deseneaza(ecran);
							Sprite cv(negru, c[3].x, c[3].y, 30, 30);
							cv.deseneaza(ecran);
							Sprite bv(negru, c[4].x, c[4].y, 30, 30);
							bv.deseneaza(ecran);

							SDL_UpdateWindowSurface(fereastra);

							
							joc_nou_apasat = true;
							merge = false;
						}
						break;
			}
			default:
				break;
			}

			
		}	
		SDL_UpdateWindowSurface(fereastra);
		frana_frame(moment_zero);
	}
	
	if (joc_nou_apasat)
	{
		bool ma_joc = true;
		SDL_Event event_joc;
			while (ma_joc)
				{
				while (SDL_PollEvent(&event_joc))
						{
								
							switch (event_joc.type)
									{
										case SDL_KEYDOWN:
										{
											switch (event_joc.key.keysym.sym)
											{
												case SDLK_ESCAPE:
												{
													ma_joc = false;
													SDL_DestroyWindow(fereastra);
													SDL_Quit();
													break;
												}
												

												default:
												break;
											}
										}

			 						}
						}
				}
	}
	
	SDL_DestroyWindow(fereastra);

	SDL_Quit();
	return 0;
}