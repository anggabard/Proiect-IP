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
							
							creare_harta(m, c, mat);

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
		SDL_Rect casute_plus = setare_coordonate(704, 215, 111, 54);
		SDL_Rect drum_plus = setare_coordonate(705, 350, 111, 54);
		SDL_Rect oras_plus = setare_coordonate(703, 282, 111, 54);
		SDL_Rect trade = setare_coordonate(704, 423, 111, 54);
		SDL_Surface * casa;
		bool ma_joc = true;
		int zar_2 = 0;
		int suma_zaruri = 0;
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
																   
																   int zar_1 = rendom();
																   
																	bool ok = true;

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
																							   {																																	p1.tura = false;							
																									p2.tura = true;
																									p1.nr_ture++;
																									ok = true;
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
																							   case SDLK_a:
																							   {
																											  p1.resurse[1] += 5;
																											  p1.resurse[2] += 5;
																											  p1.resurse[3] += 5;
																											  p1.resurse[4] += 5;
																											  p1.resurse[5] += 5;
																												  break;

																							   }
		
																							   }
																							   break;
																		   }
																		   case SDL_MOUSEBUTTONDOWN:
																		   {
																					 int x = NULL, y = NULL;
																					 SDL_GetMouseState(&x, &y);
																					 if (p1.nr_ture == 0)
																					 {
																						 prima_tura(p1, 1, 1, x, y, casute, ecran);
																						 SDL_UpdateWindowSurface(fereastra);
																						 
																					 }
																					 else if (p1.nr_asezari == 1 && p1.nr_drumuri == 0)
																					 {
																						 pune_drum(p1, 1, x, y, casute, ecran);
																						 SDL_UpdateWindowSurface(fereastra);
																					 }
																					 else if (p1.nr_ture == 2 && p2.nr_ture == 3 && p1.nr_drumuri == 1)
																						 {
																							 prima_tura(p1, 1, 2, x, y, casute, ecran);
																							 SDL_UpdateWindowSurface(fereastra);
																						 }
																					 else if (p1.nr_asezari == 2 && p1.nr_drumuri == 1)
																					 {
																						 pune_drum(p1, 1, x, y, casute, ecran);
																						 SDL_UpdateWindowSurface(fereastra);
																						 for (int i = 1; i <= 54; i++)
																						 {
																							 if (c[i].disp.player1 == true)
																								c[i].disp.player1 = false;
																							 
																							 if (c[i].disp.player2 == true)
																								 c[i].disp.player2 = false;
																						 }

																					 }
																					 else
																					 {
																						 
																						 if (este_deasupra(casute_plus, x, y))
																						 {
																							 if (p1.resurse[1] > 0 && p1.resurse[2] > 0 && p1.resurse[3] > 0 && p1.resurse[5] > 0)
																							 {
																								 if (ai_unde(p1, 1))
																								 {
																									 adauga_casuta(p1, 1, casute, ecran);
																									 p1.resurse[1]--;
																									 p1.resurse[2]--;
																									 p1.resurse[3]--;
																									 p1.resurse[5]--;
																								 }
																								 else
																								 {
																									 SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
																										 "VALEU VALEU",
																										 "N-ai unde!",
																										 NULL);
																								 }
																							 }
																							 else
																							 {
																								 SDL_ShowSimpleMessageBox( SDL_MESSAGEBOX_ERROR ,
																									 "VALEU VALEU",
																									 "Nu ai suficiente resurse!",
																									 NULL);
																							 }
																						 }
																						 else if (este_deasupra(drum_plus, x, y))
																						 {
																							 if (p1.resurse[1] > 0 && p1.resurse[3] > 0)
																							 {
																								 bool buton_apasat = true;
																								 SDL_Event pune_drum_pa_harte;
																								 while (buton_apasat)
																								 {
																									 while (SDL_PollEvent(&pune_drum_pa_harte))
																									 {
																										 switch (pune_drum_pa_harte.type)
																										 {
																										 case SDL_MOUSEBUTTONDOWN:

																										 {
																																	 ii_bun = true;
																																	 int x = NULL, y = NULL;
																																	 SDL_GetMouseState(&x, &y);
																																	 pune_drum(p1, 1, x, y, casute, ecran);
																																	 buton_apasat = false;
																																	 break;
																										 }

																										 }
																									 }
																								 }
																								 if (ii_bun)
																								 {
																									 p1.resurse[1]--;
																									 p1.resurse[3]--;
																								 }
																							 }
																						 }
																						 else if (este_deasupra(oras_plus, x, y))
																						 {
																							 if (p1.resurse[4] > 2 && p1.resurse[2] > 1)
																							 {
																								 if (ai_unde_oras(p1))
																								 {
																									 adauga_oras(p1, 1, casute, ecran);
																									 SDL_UpdateWindowSurface(fereastra);
																									 p1.resurse[4] -= 3;
																									 p1.resurse[2] -= 2;
																								 }
																								 else
																								 {
																									 SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
																										 "VALEU VALEU",
																										 "N-ai unde!",
																										 NULL);
																								 }
																							 }
																							 else
																							 {
																								 SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
																									 "VALEU VALEU",
																									 "Nu ai suficiente resurse!",
																									 NULL);
																							 }
																						 }
																						 else if (este_deasupra(trade, x, y))
																						 {
																							 ////
																							 SDL_Window * trade_window = NULL;

																							 trade_window = SDL_CreateWindow("Trade",
																								 SDL_WINDOWPOS_UNDEFINED,
																								 SDL_WINDOWPOS_UNDEFINED,
																								 832,
																								 335,
																								 0);
																							 
																							 SDL_Surface *trade_sup = SDL_GetWindowSurface(trade_window);
																							 SDL_Surface * fundal = SDL_LoadBMP("fundal_trade.bmp");
																							 SDL_BlitSurface(fundal, NULL, trade_sup, &trade_sup->clip_rect);
																							 SDL_UpdateWindowSurface(trade_window);

																							 negot(trade_sup, p1, trade_window);
																							 afisare_resurse(p1, 1, negru_font, ecran, casute);
																							 SDL_UpdateWindowSurface(fereastra);

																						 }
																					 }

																								   break;
																		   }
																		   default:
																			   break;

																		   }
																	   }
																	   if (ok)
																	   {
																		   zar_2 = rendom();
																		   suma_zaruri = zar_1 + zar_2;
																	   }
																	   if (p1.nr_ture > 2 && ok)
																	   {
																		   afisare_zaruri(zar_1, zar_2, casute, ecran);
																		   SDL_UpdateWindowSurface(fereastra);
																		   for (int hex = 1; hex <= 19; hex++)
																		   {
																			   if (m[hex].nr == suma_zaruri)
																			   {
																				   for (int j = 1; j <= 6; j++)
																				   for (int k = 0; k < p1.nr_asezari; k++)
																				   if (m[hex].legatura[j] == p1.asezari[k])
																				   {
																					   if (p1.asezari[k]->tip_asezare == 1)
																					   {
																						   p1.resurse[m[hex].tip_resursa]++;
																						   ok = false;
																					   }
																					   else if (p1.asezari[k]->tip_asezare == 2)
																					   {
																						   p1.resurse[m[hex].tip_resursa] += 2;
																						   ok = false;
																					   }
																				   }
																				   else ok = false;

																				   for (int j = 1; j <= 6; j++)
																				   for (int k = 0; k < p2.nr_asezari; k++)
																				   if (m[hex].legatura[j] == p2.asezari[k])
																				   {
																					   if (p2.asezari[k]->tip_asezare == 1)
																					   {
																						   p2.resurse[m[hex].tip_resursa]++;
																						   ok = false;
																					   }
																					   else if (p2.asezari[k]->tip_asezare == 2)
																					   {
																						   p2.resurse[m[hex].tip_resursa] += 2;
																						   ok = false;
																					   }

																				   }
																				   else ok = false;
																			   }
																			   else ok = false;
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
																   /////////////////////////////////////////////////
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
																												  p2.nr_ture++;
																												  ok = true;
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
																							   case SDLK_a:
																							   {
																											  p2.resurse[1] += 5;
																											  p2.resurse[2] += 5;
																											  p2.resurse[3] += 5;
																											  p2.resurse[4] += 5;
																											  p2.resurse[5] += 5;
																											  break;

																							   }
																							   }
																							   break;
																		   }
																		   case SDL_MOUSEBUTTONDOWN:
																		   {
																						int x = NULL, y = NULL;
																						SDL_GetMouseState(&x, &y);
																						if (p2.nr_ture == 0)
																						{
																							prima_tura(p2, 2, 1, x, y, casute, ecran);
																							SDL_UpdateWindowSurface(fereastra);
																						}
																						else if (p2.nr_drumuri == 0)
																						{
																							pune_drum(p2, 2, x, y, casute, ecran);
																							SDL_UpdateWindowSurface(fereastra);
																						}
																						else if (p2.nr_ture == 1 && p2.nr_drumuri == 1)
																						{
																								prima_tura(p2, 2, 2, x, y, casute, ecran);
																								SDL_UpdateWindowSurface(fereastra);
																							
																						}
																						else if (p2.nr_asezari == 2 && p2.nr_drumuri == 1)
																						{
																							pune_drum(p2, 2, x, y, casute, ecran);
																							SDL_UpdateWindowSurface(fereastra);
																						}
																						else
																						{

																							if (este_deasupra(casute_plus, x, y))
																							{
																								if (p2.resurse[1] > 0 && p2.resurse[2] > 0 && p2.resurse[3] > 0 && p2.resurse[5] > 0)
																								{
																									if (ai_unde(p2, 2))
																									{
																										adauga_casuta(p2, 2, casute, ecran);
																										p2.resurse[1]--;
																										p2.resurse[2]--;
																										p2.resurse[3]--;
																										p2.resurse[5]--;
																									}
																									else
																									{
																										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
																											"VALEU VALEU",
																											"N-ai unde!",
																											NULL);
																									}
																								}
																								else
																								{
																									SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
																										"VALEU VALEU",
																										"Nu ai suficiente resurse!",
																										NULL);
																								}
																							}
																							else if (este_deasupra(drum_plus, x, y))
																							{
																								if (p2.resurse[1] > 0 && p2.resurse[3] > 0)
																								{
																									bool buton_apasat = true;
																									SDL_Event pune_drum_pa_harte;
																									while (buton_apasat)
																									{
																										while (SDL_PollEvent(&pune_drum_pa_harte))
																										{
																											switch (pune_drum_pa_harte.type)
																											{
																											case SDL_MOUSEBUTTONDOWN:

																											{
																																		ii_bun = true;
																																		int x = NULL, y = NULL;
																																		SDL_GetMouseState(&x, &y);
																																		pune_drum(p2, 2, x, y, casute, ecran);
																																		buton_apasat = false;
																																		break;
																											}

																											}
																										}
																									}
																									if (ii_bun)
																									{
																										p2.resurse[1]--;
																										p2.resurse[3]--;
																									}
																								}
																							}
																							else if (este_deasupra(oras_plus, x, y))
																							{
																								if (p2.resurse[4] > 2 && p2.resurse[2] > 1)
																								{
																									if (ai_unde_oras(p2))
																									{
																										adauga_oras(p2, 2, casute, ecran);
																										SDL_UpdateWindowSurface(fereastra);
																										p2.resurse[4]-=3;
																										p2.resurse[2]-=2;
																									}
																									else
																									{
																										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
																											"VALEU VALEU",
																											"N-ai unde!",
																											NULL);
																									}
																								}
																								else
																								{
																									SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
																										"VALEU VALEU",
																										"Nu ai suficiente resurse!",
																										NULL);
																								}
																							}
																						}
																					break;
																		   }

																		   }
																	   }
																	   if (ok)
																	   {
																		   zar_2 = rendom();
																		   suma_zaruri = zar_1 + zar_2;
																	   }
																	   if (p2.nr_ture > 2 && ok)
																	   {
																		   afisare_zaruri(zar_1, zar_2, casute, ecran);
																		   SDL_UpdateWindowSurface(fereastra);
																		   for (int hex = 1; hex <= 19; hex++)
																		   {
																			   if (m[hex].nr == suma_zaruri)
																			   {
																				   for (int j = 1; j <= 6; j++)
																				   for (int k = 0; k < p2.nr_asezari; k++)
																				   if (m[hex].legatura[j] == p2.asezari[k])
																				   {
																					   if (p2.asezari[k]->tip_asezare == 1)
																					   {
																						   p2.resurse[m[hex].tip_resursa]++;
																						   ok = false;
																					   }
																					   else if (p2.asezari[k]->tip_asezare == 2)
																					   {
																						   p2.resurse[m[hex].tip_resursa] += 2;
																						   ok = false;
																					   }


																				   }
																				   else ok = false;

																				   for (int j = 1; j <= 6; j++)
																				   for (int k = 0; k < p1.nr_asezari; k++)
																				   if (m[hex].legatura[j] == p1.asezari[k])
																				   {
																					   if (p1.asezari[k]->tip_asezare == 1)
																					   {
																						   p1.resurse[m[hex].tip_resursa]++;
																						   ok = false;
																					   }
																					   else if (p1.asezari[k]->tip_asezare == 2)
																					   {
																						   p1.resurse[m[hex].tip_resursa] += 2;
																						   ok = false;
																					   }

																				   }
																				   else ok = false;
																			   }
																			   else ok = false;
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