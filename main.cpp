#include <iostream>
#include "SDL.h"
#include "SDL_ttf.h"
#include <string>
#include "Structuri.h"
#include "functi.h"

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
	int origine_x;
	int origine_y;
public:
	Sprite(Uint32 culoare, int x, int y, int latime, int inaltime)
	{
		imagine = SDL_CreateRGBSurface(0, latime, inaltime, 32, 0, 0, 0, 0);

			SDL_FillRect(imagine, NULL, culoare);

			coordonate = imagine -> clip_rect;

			origine_x = coordonate.w/2;
			origine_y = coordonate.h/2;


			coordonate.x = x - origine_x;
			coordonate.y = y - origine_y;
	}
	void deseneaza(SDL_Surface *destinatie)
	{
		SDL_BlitSurface(imagine, NULL, destinatie, &coordonate);
	}
};

int main(int argc, char* args[])
{
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();
	SDL_Window *fereastra = NULL;
	SDL_Surface * casute = NULL;
	SDL_Surface * copie_casute = NULL;
	copie_casute = SDL_LoadBMP("tabla_puncte.bmp");
	casute = SDL_LoadBMP("tabla_fara_puncte.bmp");
	fereastra = SDL_CreateWindow("Catan!",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		832,
		669,
		0);

	int latime_ecran;
	int lungime_ecran;
	SDL_GetWindowSize(fereastra, &latime_ecran, &lungime_ecran);
	
	SDL_Color verde_font = { 0, 255, 0 };
	SDL_Color negru_font = { 0, 0, 0 };

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
							fundal->clip_rect.x = latime_ecran /2 - fundal-> w/2;
							fundal->clip_rect.y = lungime_ecran /2 - fundal-> h/2;
							SDL_BlitSurface(fundal, NULL, ecran, &fundal->clip_rect);
							
							creare_harta(m, c);

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
		int nr_asezari_p1 = 0;
		int nr_asezari_p2 = 0;
		
		bool ma_joc = true;
		creare_player(p1, p2);
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
												case SDLK_s:
												{

															   SDL_Event actiune_player;
															   while(p1.pct < 7 && p2.pct < 7 && ma_joc)
															   {
																   while (p1.tura)
																   {
																	   while (SDL_PollEvent(&actiune_player))
																	   {
																		   switch (actiune_player.type)
																		   {
																		   case SDL_KEYDOWN:
																		   {
																							   switch (actiune_player.key.keysym.sym)
																							   {
																							   case SDLK_SPACE:
																							   {																															 p1.tura = false;							
																											p2.tura = true;
																								break;
																							   }
																							   case SDLK_ESCAPE:
																							   {
																												   ma_joc = false;
																												   p2.tura = false;
																												   p1.tura = false;
																												   SDL_DestroyWindow(fereastra);
																												   SDL_Quit();
																												   break;
																							   }
		
																							   }
																							   break;
																		   }
																		   case SDL_MOUSEBUTTONDOWN:
																		   {
																					 int x = NULL, y = NULL;
																					 SDL_GetMouseState(&x, &y);
																					 for (int i = 1; i <= 54; i++)
																					 {
																						
																						 SDL_Rect coordonate_casuta;
																						 coordonate_casuta.x = c[i].coor_centru_x - 20;
																						 coordonate_casuta.y = c[i].coor_centru_y - 20;
																						 coordonate_casuta.h = 40;
																						 coordonate_casuta.w = 40;
																						 if (este_deasupra(coordonate_casuta, x, y))
																						 {
																							
																							
																							 Sprite a(negru, c[i].coor_centru_x, c[i].coor_centru_y, 40, 40);
																							 a.deseneaza(casute);
																							 SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
																							 SDL_UpdateWindowSurface(fereastra);
																							 p1.pct++;
																							 p1.asezari[nr_asezari_p1] = &c[i];
																							 nr_asezari_p1++;
																							 for (int j = 1; j <= 19; j++)
																							 for (int k = 1; k <= 6; k++)
																							 if (c[i].nume == m[j].legatura[k]->nume)
																									p1.resurse[m[j].tip_resursa]++;
																							 c[i].asezare = 1;
																							 c[i].disp.player1 = false;
																							 c[i].disp.player2 = false;
																							 break;
																						 }
																					 }
																								   break;
																		   }
																		   default:
																			   break;

																		   }
																	   }
																	   
																	   if (ma_joc)
																	   {	
																		   afisare_resurse(p1, 1, negru_font, ecran, casute);
																		   Sprite b(negru, 0, 0, 50, 50);
																		   b.deseneaza(ecran);
																		   SDL_UpdateWindowSurface(fereastra);
																	   }
																   }

																   while (p2.tura)
																   {
																	   while (SDL_PollEvent(&actiune_player))
																	   {
																		   switch (actiune_player.type)
																		   {
																		   case SDL_KEYDOWN:
																		   {
																							   switch (actiune_player.key.keysym.sym)
																							   {
																							   case SDLK_SPACE:
																							   {
																												  p2.tura = false;
																												  p1.tura = true;
																												  break;
																							   }
																							   case SDLK_ESCAPE:
																							   {
																												   ma_joc = false;
																												   p2.tura = false;
																												   p1.tura = false;
																												   SDL_DestroyWindow(fereastra);
																												   SDL_Quit();
																												   break;
																							   }
																							   }
																							   break;
																		   }
																		   case SDL_MOUSEBUTTONDOWN:
																		   {
																						int x = NULL, y = NULL;
																						SDL_GetMouseState(&x, &y);
																						for (int i = 1; i <= 54; i++)
																									{

																							SDL_Rect coordonate_casuta;
																							coordonate_casuta.x = c[i].coor_centru_x - 20;
																							coordonate_casuta.y = c[i].coor_centru_y - 20;
																							coordonate_casuta.h = 40;
																							coordonate_casuta.w = 40;
																							if (este_deasupra(coordonate_casuta, x, y))
																								{
																									Sprite a(alb, c[i].coor_centru_x, c[i].coor_centru_y, 40, 40);
																									a.deseneaza(casute);
																									SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
																									SDL_UpdateWindowSurface(fereastra);
																									p2.pct++;
																											   p2.asezari[nr_asezari_p2] = &c[i];
																											   nr_asezari_p2++;
																											   for (int j = 1; j <= 19; j++)
																											   for (int k = 1; k <= 6; k++)
																											   if (c[i].nume == m[j].legatura[k]->nume)
																												   p2.resurse[m[j].tip_resursa]++;
																											   c[i].asezare = 1;
																											   c[i].disp.player1 = false;
																											   c[i].disp.player2 = false;
																											   break;
																										   }
																									   }
																									   break;
																		   }

																		   }
																	   }
																	   if (ma_joc)
																	   {
																		  
																		   afisare_resurse(p2, 2, negru_font, ecran, casute);
																		   Sprite c(alb, 0, 0, 50, 50);
																		   c.deseneaza(ecran);
																		   SDL_UpdateWindowSurface(fereastra);
																	   }
																   }
															   }
															   break;
												}
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