#include <stdlib.h>
#include <time.h>
using std::to_string;
void creare_harta(nod_centru m[], nod_colt c[],drum mat[][55])
{
	
	//pentru prima dunga
	bool ok = true;
	for (int i = 1; i <= 2; i++)
	{
	
		c[i].coor_centru_y = 90;
		if (ok)
		{
			c[i].coor_centru_x = 390;
			ok = false;
		}
		else
		{
			c[i].coor_centru_x = 450;
			ok = true;
		}
		
	}

	
	//pentru a 2a dunga

	ok = true;
	for (int i = 3; i <= 6; i++)
	{
		
		c[i].coor_centru_y = 140;
		if (i == 3)
			c[i].coor_centru_x = 290;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 125;
				ok = true;
			}

		}
		
	}

	
	//pentru a 3a dunga
	ok=true;
	for (int i = 7; i <= 12; i++)
	{
		//bool ok = false;
		c[i].coor_centru_y = 189;
		if (i == 7)
			c[i].coor_centru_x = 190;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 125;
				ok = true;
			}
		}
		
	}
	//pentru a 4a dunga
	ok=false;
	for (int i = 13; i <= 18; i++)
	{
		//bool ok = true;
		c[i].coor_centru_y = 238;
		if (i == 13)
			c[i].coor_centru_x = 160;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 125;
				ok = true;
			}
		}
		
	}
	//pentru a 5a dunga
	ok=true;
	for (int i = 19; i <= 24; i++)
	{
		//bool ok = false;
		c[i].coor_centru_y = 287;
		if (i == 19)
			c[i].coor_centru_x = 190;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 125;
				ok = true;
			}
		}
		
	}
	//pentru a 6a dunga
	ok=false;
	for (int i = 25; i <= 30; i++)
	{
		//bool ok = true;
		c[i].coor_centru_y = 336;
		if (i == 25)
			c[i].coor_centru_x = 160;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 125;
				ok = true;
			}
		}
		
	}
	//pentru a 7a dunga
	ok=true;
	for (int i = 31; i <= 36; i++)
	{
		//bool ok = false;
		c[i].coor_centru_y = 385;
		if (i == 31)
			c[i].coor_centru_x = 190;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 125;
				ok = true;
			}
		}
		
	}
	//pentru a 8a dunga
	ok=false;
	for (int i = 37; i <= 42; i++)
	{
		//bool ok = true;
		c[i].coor_centru_y = 434;
		if (i == 37)
			c[i].coor_centru_x = 160;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 125;
				ok = true;
			}
		}
		
	}
	//pentru a 9a dunga
	ok=true;
	for (int i = 43; i <= 48; i++)
	{
		//bool ok = false;
		c[i].coor_centru_y = 483;
		if (i == 43)
			c[i].coor_centru_x = 190;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 128;
				ok = true;
			}
		}
		
	}
	//pentru a 10a dunga
	ok=true;
	for (int i = 49; i <= 52; i++)
	{
		//bool ok = false;
		c[i].coor_centru_y = 532;
		if (i == 49)
			c[i].coor_centru_x = 290;
		else{
			if (ok)
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 67;
				ok = false;
			}
			else
			{
				c[i].coor_centru_x = c[i - 1].coor_centru_x + 125;
				ok = true;
			}
		}
		
	}
	//ultima dunga
	ok=false;
	for (int i = 53; i <= 54; i++)
	{
		//bool ok = true;
		c[i].coor_centru_y = 581;
		if (ok)
		{
			c[i].coor_centru_x = 383;
			ok = false;
		}
		else
		{
			c[i].coor_centru_x = 448;
			ok = true;
		}
		
	}

	
	for (int i = 1; i <= 54; i++)
		{
			c[i].disp.player1 = true;
			c[i].disp.player2 = true;
		c[i].tip_asezare = 0;
		c[i].nume = i;
		c[i].x = c[i].coor_centru_x -18;
		c[i].y = c[i].coor_centru_y -18;
		c[i].h = c[i].y + 36;
		c[i].w = c[i].x + 36;
	}




	//
	for (int i = 1; i <= 19; i++)
	{
		
		m[i].nume = i;
		m[i].hot = false;
		if (i == 5 || i == 8 || i == 16 || i == 18) m[i].tip_resursa = 1;
		else if (i == 10 || i == 12 || i == 13 || i == 15) m[i].tip_resursa = 2;
		else if (i == 9 || i == 14 || i == 19) m[i].tip_resursa = 3;
		else if (i == 2 || i == 7 || i == 17) m[i].tip_resursa = 4;
		else if (i == 1 || i == 3 || i == 4 || i == 6) m[i].tip_resursa = 5;

		if (i == 1)
		{
				m[i].nr = 12;

			m[i].legatura[1] = &c[1];
			m[i].legatura[2] = &c[2];
			m[i].legatura[3] = &c[5];
			m[i].legatura[4] = &c[10];
			m[i].legatura[5] = &c[9];
			m[i].legatura[6] = &c[4];

			/*m[i].x = (m[i].legatura[1].coor_centru_x + m[i].legatura[2].coor_centru_x) / 2;
			m[i].y = (m[i].legatura[1].coor_centru_y + m[i].legatura[5].coor_centru_y) / 2;*/

		}
		else if (i == 2)
		{
			m[i].nr = 8;

			m[i].legatura[1] = &c[3];
			m[i].legatura[2] = &c[4];
			m[i].legatura[3] = &c[9];
			m[i].legatura[4] = &c[15];
			m[i].legatura[5] = &c[14];
			m[i].legatura[6] = &c[8];

			/*m[i].x = (m[i].legatura[1].coor_centru_x + m[i].legatura[2].coor_centru_x) / 2;
			m[i].y = (m[i].legatura[1].coor_centru_y + m[i].legatura[5].coor_centru_y) / 2;*/
		}

		else if (i == 3)
		{
			m[i].nr = 4;

			m[i].legatura[1] = &c[5];
			m[i].legatura[2] = &c[6];
			m[i].legatura[3] = &c[11];
			m[i].legatura[4] = &c[17];
			m[i].legatura[5] = &c[16];
			m[i].legatura[6] = &c[10];

			/*m[i].x = (m[i].legatura[1].coor_centru_x + m[i].legatura[2].coor_centru_x) / 2;
			m[i].y = (m[i].legatura[1].coor_centru_y + m[i].legatura[5].coor_centru_y) / 2;*/
		}
		else if (i == 4)
		{
			m[i].nr = 9;

			m[i].legatura[1] = &c[7];
			m[i].legatura[2] = &c[8];
			m[i].legatura[3] = &c[14];
			m[i].legatura[4] = &c[20];
			m[i].legatura[5] = &c[19];
			m[i].legatura[6] = &c[13];

			/*m[i].x = (m[i].legatura[1].coor_centru_x + m[i].legatura[2].coor_centru_x) / 2;
			m[i].y = (m[i].legatura[1].coor_centru_y + m[i].legatura[5].coor_centru_y) / 2;*/
		}
		else if (i == 5)
		{
			m[i].nr = 11;

			m[i].legatura[1] = &c[9];
			m[i].legatura[2] = &c[10];
			m[i].legatura[3] = &c[16];
			m[i].legatura[4] = &c[22];
			m[i].legatura[5] = &c[21];
			m[i].legatura[6] = &c[15];
		}
		else if (i == 6)
		{
			m[i].nr = 5;

			m[i].legatura[1] = &c[11];
			m[i].legatura[2] = &c[12];
			m[i].legatura[3] = &c[18];
			m[i].legatura[4] = &c[24];
			m[i].legatura[5] = &c[23];
			m[i].legatura[6] = &c[17];
		}
		else if (i == 7)
		{
			m[i].nr = 5;

			m[i].legatura[1] = &c[14];
			m[i].legatura[2] = &c[15];
			m[i].legatura[3] = &c[21];
			m[i].legatura[4] = &c[27];
			m[i].legatura[5] = &c[26];
			m[i].legatura[6] = &c[20];
		}
		else if (i == 8)
		{
			m[i].nr = 6;

			m[i].legatura[1] = &c[16];
			m[i].legatura[2] = &c[17];
			m[i].legatura[3] = &c[23];
			m[i].legatura[4] = &c[29];
			m[i].legatura[5] = &c[28];
			m[i].legatura[6] = &c[22];
		}
		else if (i == 9)
		{
			m[i].nr = 10;

			m[i].legatura[1] = &c[19];
			m[i].legatura[2] = &c[20];
			m[i].legatura[3] = &c[26];
			m[i].legatura[4] = &c[32];
			m[i].legatura[5] = &c[31];
			m[i].legatura[6] = &c[25];
		}
		else if (i == 10)
		{
			m[i].nr = 3;

			m[i].legatura[1] = &c[21];
			m[i].legatura[2] = &c[22];
			m[i].legatura[3] = &c[28];
			m[i].legatura[4] = &c[34];
			m[i].legatura[5] = &c[33];
			m[i].legatura[6] = &c[27];
		}
		else if (i == 11)
		{
			m[i].nr = 0;
			m[i].hot = true;
			m[i].tip_resursa = 0;
			m[i].legatura[1] = &c[23];
			m[i].legatura[2] = &c[24];
			m[i].legatura[3] = &c[30];
			m[i].legatura[4] = &c[36];
			m[i].legatura[5] = &c[35];
			m[i].legatura[6] = &c[29];
		}
		else if (i == 12)
		{
			m[i].nr = 11;
		

			m[i].legatura[1] = &c[26];
			m[i].legatura[2] = &c[27];
			m[i].legatura[3] = &c[33];
			m[i].legatura[4] = &c[39];
			m[i].legatura[5] = &c[38];
			m[i].legatura[6] = &c[32];
		}
		else if (i == 13)
		{
			m[i].nr = 2;

			m[i].legatura[1] = &c[28];
			m[i].legatura[2] = &c[29];
			m[i].legatura[3] = &c[35];
			m[i].legatura[4] = &c[41];
			m[i].legatura[5] = &c[40];
			m[i].legatura[6] = &c[34];
		}
		else if (i == 14)
		{
			m[i].nr = 10;

			m[i].legatura[1] = &c[31];
			m[i].legatura[2] = &c[32];
			m[i].legatura[3] = &c[38];
			m[i].legatura[4] = &c[44];
			m[i].legatura[5] = &c[43];
			m[i].legatura[6] = &c[37];
		}
		else if (i == 15)
		{
			m[i].nr = 6;

			m[i].legatura[1] = &c[33];
			m[i].legatura[2] = &c[34];
			m[i].legatura[3] = &c[40];
			m[i].legatura[4] = &c[46];
			m[i].legatura[5] = &c[45];
			m[i].legatura[6] = &c[39];
		}
		else if (i == 16)
		{
			m[i].nr = 8;

			m[i].legatura[1] = &c[35];
			m[i].legatura[2] = &c[36];
			m[i].legatura[3] = &c[42];
			m[i].legatura[4] = &c[48];
			m[i].legatura[5] = &c[47];
			m[i].legatura[6] = &c[41];
		}
		else if (i == 17)
		{
			m[i].nr = 9;

			m[i].legatura[1] = &c[38];
			m[i].legatura[2] = &c[39];
			m[i].legatura[3] = &c[45];
			m[i].legatura[4] = &c[50];
			m[i].legatura[5] = &c[49];
			m[i].legatura[6] = &c[44];
		}
		else if (i == 18)
		{
			m[i].nr = 4;

			m[i].legatura[1] = &c[40];
			m[i].legatura[2] = &c[41];
			m[i].legatura[3] = &c[47];
			m[i].legatura[4] = &c[52];
			m[i].legatura[5] = &c[51];
			m[i].legatura[6] = &c[46];
		}
		else if (i == 19)
		{
			m[i].nr = 3;

			m[i].legatura[1] = &c[45];
			m[i].legatura[2] = &c[46];
			m[i].legatura[3] = &c[51];
			m[i].legatura[4] = &c[54];
			m[i].legatura[5] = &c[53];
			m[i].legatura[6] = &c[50];
		}


		m[i].x_centru = ( m[i].legatura[1]->coor_centru_x + m[i].legatura[2]->coor_centru_x  ) / 2;
		m[i].y_centru = ( m[i].legatura[1]->coor_centru_y + m[i].legatura[5]->coor_centru_y  ) / 2;
		m[i].arie_x = m[i].x_centru - 35;
		m[i].arie_y = m[i].y_centru - 35; 
		m[i].arie_w = 70; 
		m[i].arie_h = 70;
		

		for(int j=1; j<=6; j++)
		{
			if(j!=6)
			{
				if( mat[m[i].legatura[j] -> nume][m[i].legatura[j + 1]->nume].leg == false )
				{
					mat[m[i].legatura[j] -> nume][m[i].legatura[j + 1] -> nume].leg = true;
					mat[m[i].legatura[j + 1]->nume][m[i].legatura[j] -> nume].leg = true;
					mat[m[i].legatura[j] -> nume][m[i].legatura[j + 1] -> nume].x_centru = ( m[i].legatura[j] -> coor_centru_x + m[i].legatura[j + 1] -> coor_centru_x ) /2;
					mat[m[i].legatura[j] -> nume][m[i].legatura[j + 1] -> nume].y_centru = ( m[i].legatura[j] -> coor_centru_y + m[i].legatura[j + 1] -> coor_centru_y ) /2;
					mat[m[i].legatura[j + 1] -> nume][m[i].legatura[j] -> nume].x_centru = ( m[i].legatura[j + 1] -> coor_centru_x + m[i].legatura[j] -> coor_centru_x ) /2;
					mat[m[i].legatura[j + 1] -> nume][m[i].legatura[j] -> nume].y_centru = ( m[i].legatura[j + 1] -> coor_centru_y + m[i].legatura[j] -> coor_centru_y ) /2;
				}
			}
			else
				{
					if( mat[m[i].legatura[6] -> nume][m[i].legatura[1] -> nume].leg == false )
					{
						mat[m[i].legatura[6] -> nume][m[i].legatura[1] -> nume].leg = true;
						mat[m[i].legatura[1] -> nume][m[i].legatura[6] -> nume].leg = true;
						mat[m[i].legatura[6] -> nume][m[i].legatura[1] -> nume].x_centru = ( m[i].legatura[6] -> coor_centru_x + m[i].legatura[1] -> coor_centru_x ) /2;
						mat[m[i].legatura[6] -> nume][m[i].legatura[1] -> nume].y_centru = ( m[i].legatura[6] -> coor_centru_y + m[i].legatura[1] -> coor_centru_y ) /2;
						mat[m[i].legatura[1] -> nume][m[i].legatura[6] -> nume].x_centru = ( m[i].legatura[1] -> coor_centru_x + m[i].legatura[6] -> coor_centru_x ) /2;
						mat[m[i].legatura[1] -> nume][m[i].legatura[6] -> nume].y_centru = ( m[i].legatura[1] -> coor_centru_y + m[i].legatura[6] -> coor_centru_y ) /2;
					}
				}
		}
		
	}
	
	for (int lin = 1; lin <= 54; lin++)
	for (int col = 1; col <= 54; col++)
	{
		mat[lin][col].disp.player1 = false;
		mat[lin][col].disp.player2 = false;
		mat[lin][col].poteca.player1 = false;
		mat[lin][col].poteca.player2 = false;
		mat[lin][col].tip_drum = 0;
	}
	
	for (int i = 1; i <= 19; i++)
	for (int j = 1; j <= 5; j++)
	{
		if (mat[m[i].legatura[j]->nume][m[i].legatura[j + 1]->nume].tip_drum == 0)
		{
			if (j == 1 || j == 4)
			{
				mat[m[i].legatura[j]->nume][m[i].legatura[j + 1]->nume].tip_drum = 1;
				mat[m[i].legatura[j + 1]->nume][m[i].legatura[j]->nume].tip_drum = 1;
			}
			else if (j == 2 || j == 5)
			{
				mat[m[i].legatura[j]->nume][m[i].legatura[j + 1]->nume].tip_drum = 2;
				mat[m[i].legatura[j + 1]->nume][m[i].legatura[j]->nume].tip_drum = 2;
			}
			else if (j == 3)
			{
				mat[m[i].legatura[j]->nume][m[i].legatura[j + 1]->nume].tip_drum = 3;
				mat[m[i].legatura[j + 1]->nume][m[i].legatura[j]->nume].tip_drum = 3;
			}

		}
			mat[m[i].legatura[6]->nume][m[i].legatura[1]->nume].tip_drum = 3;
			mat[m[i].legatura[1]->nume][m[i].legatura[6]->nume].tip_drum = 3;

	}
}

SDL_Rect setare_coordonate(int x, int y, int w, int h)
{
	SDL_Rect rect;
	rect.x = x;
	rect.y = y;
	rect.h = h;
	rect.w = w;
	return rect;
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

void prima_tura(player &p, int index_player, int tip_asezare, int x, int y, SDL_Surface * casute, SDL_Surface * ecran)
{
	for (int i = 1; i <= 54; i++)
	{
		SDL_Surface * casa;
		SDL_Rect coordonate_casuta;
		coordonate_casuta.x = c[i].coor_centru_x - 20;
		coordonate_casuta.y = c[i].coor_centru_y - 20;
		coordonate_casuta.h = 40;
		coordonate_casuta.w = 40;
		if (index_player == 2)
		{
			if (este_deasupra(coordonate_casuta, x, y) && c[i].disp.player2)
			{
				if (tip_asezare == 1)
				{
					casa = SDL_LoadBMP("casuta_p2.bmp");
					adauga_img_aici(casa, coordonate_casuta.x + 10, coordonate_casuta.y + 7, casute);
					SDL_FreeSurface(casa);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
					p2.pct++;
					p2.nr_ture++;
					c[i].tip_asezare = 1;
				}
				else
				{
					casa = SDL_LoadBMP("oras_p2.bmp");
					adauga_img_aici(casa, coordonate_casuta.x + 10, coordonate_casuta.y + 7, casute);
					SDL_FreeSurface(casa);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
					p2.pct+=2;
					for (int j = 1; j <= 19; j++)
					for (int k = 1; k <= 6; k++)
						if (c[i].nume == m[j].legatura[k]->nume)
						p2.resurse[m[j].tip_resursa]++;
					p2.nr_ture++;
					c[i].tip_asezare = 2;

				}
				
				for (int vecini = 1; vecini <= 54; vecini++)
				if (mat[c[i].nume][vecini].leg)
				{
					mat[c[i].nume][vecini].disp.player2 = true;
					mat[vecini][c[i].nume].disp.player2 = true;
				}
				for (int j = 1; j <= 19; j++)
				for (int k = 1; k <= 6; k++)
				{
					if (c[i].nume == m[j].legatura[k]->nume)
					{
						if (k == 1)
						{
							m[j].legatura[6]->disp.player1 = false;
							m[j].legatura[6]->disp.player2 = false;
							m[j].legatura[2]->disp.player1 = false;
							m[j].legatura[2]->disp.player2 = false;
						}
						else if (k == 6)
						{
							m[j].legatura[1]->disp.player1 = false;
							m[j].legatura[1]->disp.player2 = false;
							m[j].legatura[5]->disp.player1 = false;
							m[j].legatura[5]->disp.player2 = false;
						}
						else
						{
							m[j].legatura[k - 1]->disp.player1 = false;
							m[j].legatura[k - 1]->disp.player2 = false;
							m[j].legatura[k + 1]->disp.player1 = false;
							m[j].legatura[k + 1]->disp.player2 = false;
						}
					}
					if (mat[c[i].nume][m[j].legatura[k]->nume].leg)
					{
						mat[c[i].nume][m[j].legatura[k]->nume].disp.player2 = true;
						mat[m[j].legatura[k]->nume][c[i].nume].disp.player2 = true;
					}
				}

				p2.asezari[p2.nr_asezari] = &c[i];
				p2.nr_asezari++;
				c[i].disp.player1 = false;
				c[i].disp.player2 = false;

				return;
			}
		}
		else
		{
			if (este_deasupra(coordonate_casuta, x, y) && c[i].disp.player1)
			{
				if (tip_asezare == 1)
				{
					casa = SDL_LoadBMP("casuta_p1.bmp");
					adauga_img_aici(casa, coordonate_casuta.x + 10, coordonate_casuta.y + 7, casute);
					SDL_FreeSurface(casa);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
					p1.pct++;
					p1.nr_ture++;
					c[i].tip_asezare = 1;

				}
				else
				{
					casa = SDL_LoadBMP("oras_p1.bmp");
					adauga_img_aici(casa, coordonate_casuta.x + 10, coordonate_casuta.y + 7, casute);
					SDL_FreeSurface(casa);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
					p1.pct += 2;
					for (int j = 1; j <= 19; j++)
					for (int k = 1; k <= 6; k++)
					if (c[i].nume == m[j].legatura[k]->nume)
						p1.resurse[m[j].tip_resursa]++;
					p1.nr_ture++;
					c[i].tip_asezare = 2;
				}
				
				for (int vecini = 1; vecini <= 54; vecini++)
				if (mat[c[i].nume][vecini].leg)
				{
					mat[c[i].nume][vecini].disp.player1 = true;
					mat[vecini][c[i].nume].disp.player1 = true;
				}

				for (int j = 1; j <= 19; j++)
				for (int k = 1; k <= 6; k++)
					{
						if (c[i].nume == m[j].legatura[k]->nume)
							{
								if (k == 1)
								{
									m[j].legatura[6]->disp.player1 = false;
									m[j].legatura[6]->disp.player2 = false;
									m[j].legatura[2]->disp.player1 = false;
									m[j].legatura[2]->disp.player2 = false;
								}
								else if (k == 6)
								{
									m[j].legatura[1]->disp.player1 = false;
									m[j].legatura[1]->disp.player2 = false;
									m[j].legatura[5]->disp.player1 = false;
									m[j].legatura[5]->disp.player2 = false;
								}
								else
								{
									m[j].legatura[k - 1]->disp.player1 = false;
									m[j].legatura[k - 1]->disp.player2 = false;
									m[j].legatura[k + 1]->disp.player1 = false;
									m[j].legatura[k + 1]->disp.player2 = false;
								}
							}
						if (mat[c[i].nume][m[j].legatura[k]->nume].leg)
							{
								mat[c[i].nume][m[j].legatura[k]->nume].disp.player1 = true;
								mat[m[j].legatura[k]->nume][c[i].nume].disp.player1 = true;
							}
					}

				p1.asezari[p1.nr_asezari] = &c[i];
				p1.nr_asezari++;
				c[i].disp.player1 = false;
				c[i].disp.player2 = false;

				return;
			}
		}
	}
}
void creare_player(player &p1, player &p2)
{
	for (int i = 0; i <= 5; i++)
	{
		p1.resurse[i] =  0;
		p1.string_resurse[i] = to_string(p1.resurse[i]);
		p2.resurse[i] =  0;
		p2.string_resurse[i] = to_string(p2.resurse[i]);
	}
	for (int i = 0; i <= 9; i++)
	{
		p1.asezari[i] = nullptr;
		p2.asezari[i] = nullptr;
	}
	for (int i = 0; i <= 19; i++)
	{
		p1.drumuri[i] = nullptr;
		p2.drumuri[i] = nullptr;
	}
	p1.nr_asezari = 0;
	p2.nr_asezari = 0;
	p1.nr_ture = 0;
	p2.nr_ture = 0;
	p1.pct = 0;
	p2.pct = 0;
	p1.nr_drumuri = 0;
	p2.nr_drumuri = 0;
	p1.tura = true;
	p2.tura = false;
}

bool colt_disponibil( int index_player, nod_colt  nod)
{
	bool ok = false;
	for (int i = 1; i <= 54; i++)
	{
		if (mat[nod.nume][i].leg && c[i].tip_asezare != 0)
			return false;
		if (mat[nod.nume][i].leg)
		{
			if (index_player == 1)
			{
				if (mat[nod.nume][i].poteca.player1)
					ok = true;
			}
			else
			{
				if (mat[nod.nume][i].poteca.player2)
					ok = true;
			}
		}
	}

	return ok;
}

void adauga_pct(player &p, int index_player, SDL_Color culoare, SDL_Surface * dest)
{
	TTF_Font* Sans = TTF_OpenFont("LSANS.TTF", 24);
	string puncte = to_string(p.pct);
	SDL_Surface* txt = TTF_RenderText_Solid(Sans, puncte.c_str(), culoare);
	SDL_Rect poz;
	if (index_player == 1)
	{
		poz.x = 675;
		poz.y = 635;
	}
	else
	{
		poz.x = 675;
		poz.y = 105;
	}
	poz.h = 50;
	poz.w = 50;
	SDL_BlitSurface(txt, NULL, dest, &poz);
	SDL_FreeSurface(txt);
}
void afisare_resurse(player &p, int index_player, SDL_Color culoare, SDL_Surface * dest, SDL_Surface * casute)
{
	SDL_Surface * tabla;
	tabla = SDL_LoadBMP("tabla_puncte.bmp");
	SDL_Rect coord_tabla;
	coord_tabla = tabla->clip_rect;
	coord_tabla.x = 0;
	coord_tabla.y = 0;
	TTF_Font* Sans = TTF_OpenFont("LSANS.TTF", 24);
	if (index_player == 1)
	{
		for (int i = 1; i <= 5; i++)
		{
			p1.string_resurse[i] = to_string(p1.resurse[i]);
			SDL_Surface* surfaceMessage = TTF_RenderText_Solid(Sans, p1.string_resurse[i].c_str(), culoare);
			SDL_Rect poz;
			if (i == 1)
			{
				poz.x = 680;
				poz.y = 538;
			}
			else if (i == 2)
			{
				poz.x = 780;
				poz.y = 538;
			}
			else if (i == 3)
			{
				poz.x = 680;
				poz.y = 570;
			}
			else if (i == 4)
			{
				poz.x = 780;
				poz.y = 570;
			}
			else if (i == 5)
			{
				poz.x = 680;
				poz.y = 605;
			}
			SDL_BlitSurface(surfaceMessage, NULL, tabla, &poz);
			SDL_FreeSurface(surfaceMessage);
		}
		adauga_pct(p, 1, culoare, tabla);
	}
	else
	{
		for (int i = 1; i <= 5; i++)
		{
			p2.string_resurse[i] = to_string(p2.resurse[i]);
			SDL_Surface* surfaceMessage = TTF_RenderText_Solid(Sans, p2.string_resurse[i].c_str(), culoare);
			SDL_Rect poz;
			if (i == 1)
			{
				poz.x = 680;
				poz.y = 8;
			}
			else if (i == 2)
			{
				poz.x = 780;
				poz.y = 8;
			}
			else if (i == 3)
			{
				poz.x = 680;
				poz.y = 40;
			}
			else if (i == 4)
			{
				poz.x = 780;
				poz.y = 40;
			}
			else if (i == 5)
			{
				poz.x = 680;
				poz.y = 75;
			}
			SDL_BlitSurface(surfaceMessage, NULL, tabla, &poz);
			SDL_FreeSurface(surfaceMessage);
		}
		adauga_pct(p, 2, culoare, tabla);
	}
	SDL_BlitSurface(tabla, NULL, dest, &coord_tabla);
	SDL_FreeSurface(tabla);
}
bool ii_bun = true;
void pune_drum(player &p, int index_player, int x, int y, SDL_Surface * casute, SDL_Surface * ecran)
{
	ii_bun = false;

	for (int lin = 1; lin <= 54; lin++)
	for (int col = 1 ; col <= 54; col++)
	{
		SDL_Surface * drum;
		SDL_Rect coordonate_drum;
		coordonate_drum.x = mat[lin][col].x_centru - 17;
		coordonate_drum.y = mat[lin][col].y_centru - 17;
		coordonate_drum.h = 34;
		coordonate_drum.w = 34;
		if (index_player == 1)
		{
			if (este_deasupra(coordonate_drum, x, y) && mat[lin][col].disp.player1)
			{
				ii_bun = true;
				if (mat[lin][col].tip_drum == 1)
				{
					drum = SDL_LoadBMP("drum_1_p1.bmp");
					adauga_img_aici(drum, coordonate_drum.x - 4, coordonate_drum.y + 11 , casute);
					SDL_FreeSurface(drum);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
				}
				else if (mat[lin][col].tip_drum == 2)
				{
					drum = SDL_LoadBMP("drum_2_p1.bmp");
					adauga_img_aici(drum, coordonate_drum.x, coordonate_drum.y, casute);
					SDL_FreeSurface(drum);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
				}
				else if (mat[lin][col].tip_drum == 3)
				{
					drum = SDL_LoadBMP("drum_3_p1.bmp");
					adauga_img_aici(drum, coordonate_drum.x, coordonate_drum.y, casute);
					SDL_FreeSurface(drum);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
				}
				p1.nr_drumuri++;
				mat[lin][col].poteca.player1 = true;
				mat[col][lin].poteca.player1 = true;
				mat[lin][col].disp.player1 = false;
				mat[col][lin].disp.player1 = false;
				mat[lin][col].disp.player2 = false;
				mat[col][lin].disp.player2 = false;
				

				for (int vecini = 1; vecini <= 54; vecini++)
				{
					if (mat[col][vecini].leg && c[vecini].tip_asezare == 0)
						c[col].disp.player1 = true;
					else if (mat[col][vecini].leg && c[vecini].tip_asezare != 0)
					{
						c[col].disp.player1 = false;
						break;
					}
					
				}
				for (int vecini = 1; vecini <= 54; vecini++)
				{
					if (mat[lin][vecini].leg && c[vecini].tip_asezare == 0)
						c[lin].disp.player1 = true;
					else if (mat[lin][vecini].leg && c[vecini].tip_asezare != 0)
					{
						c[lin].disp.player1 = false;
						break;
					}

				}
				if (colt_disponibil (1, c[lin]))
					c[lin].disp.player1 = true;
				else
					c[lin].disp.player1 = false;
				
				if (colt_disponibil(1, c[col]))
					c[col].disp.player1 = true;
				else
					c[lin].disp.player1 = false;

				for (int vecini = 1; vecini <= 54; vecini++)
					if (mat[col][vecini].leg && mat[col][vecini].poteca.player1 == false && mat[col][vecini].poteca.player2 == false)
					{
						mat[col][vecini].disp.player1 = true;
						mat[vecini][col].disp.player1 = true;
					}
				for (int vecini = 1; vecini <= 54; vecini++)
					if (mat[lin][vecini].leg && mat[lin][vecini].poteca.player1 == false && mat[lin][vecini].poteca.player2 == false)
					{
						mat[lin][vecini].disp.player1 = true;
						mat[vecini][lin].disp.player1 = true;
					}
			}
		
		}
		else
		{
			if (este_deasupra(coordonate_drum, x, y) && mat[lin][col].disp.player2)
			{
				ii_bun = true;
				if (mat[lin][col].tip_drum == 1)
				{
					drum = SDL_LoadBMP("drum_1_p2.bmp");
					adauga_img_aici(drum, coordonate_drum.x - 4, coordonate_drum.y + 11, casute);
					SDL_FreeSurface(drum);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
				}
				else if (mat[lin][col].tip_drum == 2)
				{
					drum = SDL_LoadBMP("drum_2_p2.bmp");
					adauga_img_aici(drum, coordonate_drum.x, coordonate_drum.y, casute);
					SDL_FreeSurface(drum);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
				}
				else if (mat[lin][col].tip_drum == 3)
				{
					drum = SDL_LoadBMP("drum_3_p2.bmp");
					adauga_img_aici(drum, coordonate_drum.x, coordonate_drum.y, casute);
					SDL_FreeSurface(drum);
					SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
				}
				p2.nr_drumuri++;
				mat[lin][col].poteca.player2 = true;
				mat[col][lin].poteca.player2 = true;
				mat[lin][col].disp.player1 = false;
				mat[col][lin].disp.player1 = false;
				mat[lin][col].disp.player2 = false;
				mat[col][lin].disp.player2 = false;
				
				
				for (int vecini = 1; vecini <= 54; vecini++)
				{
					if (mat[col][vecini].leg && c[vecini].tip_asezare == 0)
						c[col].disp.player2 = true;
					else if (mat[col][vecini].leg && c[vecini].tip_asezare != 0)
					{
						c[col].disp.player2 = false;
						break;
					}

				}
				for (int vecini = 1; vecini <= 54; vecini++)
				{
					if (mat[lin][vecini].leg && c[vecini].tip_asezare == 0)
						c[lin].disp.player2 = true;
					else if (mat[lin][vecini].leg && c[vecini].tip_asezare != 0)
					{
						c[lin].disp.player2 = false;
						break;
					}
				}

				if (colt_disponibil(2, c[lin]))
					c[lin].disp.player2 = true;
				else
					c[lin].disp.player2 = false;

				if (colt_disponibil(2, c[col]))
					c[col].disp.player2 = true;
				else
					c[lin].disp.player2 = false;

				for (int vecini = 1; vecini <= 54; vecini++)
				if (mat[col][vecini].leg && mat[col][vecini].poteca.player1 == false && mat[col][vecini].poteca.player2 == false)
				{
					mat[col][vecini].disp.player2 = true;
					mat[vecini][col].disp.player2 = true;
				}
				for (int vecini = 1; vecini <= 54; vecini++)
				if (mat[lin][vecini].leg && mat[lin][vecini].poteca.player1 == false && mat[lin][vecini].poteca.player2 == false)
				{
					mat[lin][vecini].disp.player2 = true;
					mat[vecini][lin].disp.player2 = true;
				}
			}
		}
	}
if (ii_bun == false)
{
	SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
		"Usor Gelu!",
		"Mai incearca",
		NULL);
}
}
int rendom()
{
	srand(time(NULL));
	int x = (rand() % 6) + 1;
	return x;
}
void afisare_zaruri(int z1, int z2, SDL_Surface * casute, SDL_Surface * ecran)
{
	SDL_Surface * zar;
	switch (z1)
	{
	case 1:
	{
			  
			  zar = SDL_LoadBMP("zar1.bmp");
			  zar->clip_rect.x = 340;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 2:
	{

			  zar = SDL_LoadBMP("zar2.bmp");
			  zar->clip_rect.x = 340;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 3:
	{

			  zar = SDL_LoadBMP("zar3.bmp");
			  zar->clip_rect.x = 340;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 4:
	{

			  zar = SDL_LoadBMP("zar4.bmp");
			  zar->clip_rect.x = 340;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 5:
	{

			  zar = SDL_LoadBMP("zar5.bmp");
			  zar->clip_rect.x = 340;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 6:
	{

			  zar = SDL_LoadBMP("zar6.bmp");
			  zar->clip_rect.x = 340;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
		SDL_FreeSurface(zar);
	}
	switch (z2)
	{
	case 1:
	{

			  zar = SDL_LoadBMP("zar1.bmp");
			  zar->clip_rect.x = 433;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 2:
	{

			  zar = SDL_LoadBMP("zar2.bmp");
			  zar->clip_rect.x = 433;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 3:
	{

			  zar = SDL_LoadBMP("zar3.bmp");
			  zar->clip_rect.x = 433;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 4:
	{

			  zar = SDL_LoadBMP("zar4.bmp");
			  zar->clip_rect.x = 433;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 5:
	{

			  zar = SDL_LoadBMP("zar5.bmp");
			  zar->clip_rect.x = 433;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
	case 6:
	{

			  zar = SDL_LoadBMP("zar6.bmp");
			  zar->clip_rect.x = 433;
			  zar->clip_rect.y = 24;
			  SDL_BlitSurface(zar, NULL, ecran, &zar->clip_rect);
			  break;

	}
		SDL_FreeSurface(zar);
	}
}
void adauga_casuta(player &p, int index_player, SDL_Surface * casute, SDL_Surface * ecran)
{
	bool ok = true;
	SDL_Event asteapta;
	while (ok)
	{
		while (SDL_PollEvent(&asteapta))
		{
			if (asteapta.type == SDL_MOUSEBUTTONDOWN)
			{
				int x = NULL, y = NULL;
				SDL_GetMouseState(&x, &y);
				for (int i = 1; i <= 54; i++)
				{
					SDL_Surface * casa;
					SDL_Rect coordonate_casuta;
					coordonate_casuta.x = c[i].coor_centru_x - 20;
					coordonate_casuta.y = c[i].coor_centru_y - 20;
					coordonate_casuta.h = 40;
					coordonate_casuta.w = 40;
					if (index_player == 2)
					{
						if (este_deasupra(coordonate_casuta, x, y) && c[i].disp.player2)
						{
							if (colt_disponibil(2, c[i]))
							{
								casa = SDL_LoadBMP("casuta_p2.bmp");
								adauga_img_aici(casa, coordonate_casuta.x + 10, coordonate_casuta.y + 7, casute);
								SDL_FreeSurface(casa);
								SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
								p2.pct++;
								c[i].tip_asezare = 1;


								for (int vecini = 1; vecini <= 54; vecini++)
								if (mat[c[i].nume][vecini].leg && mat[c[i].nume][vecini].poteca.player1 == false && mat[c[i].nume][vecini].poteca.player2 == false)
								{
									mat[c[i].nume][vecini].disp.player2 = true;
									mat[vecini][c[i].nume].disp.player2 = true;
								}
								for (int j = 1; j <= 19; j++)
								for (int k = 1; k <= 6; k++)
								{
									if (c[i].nume == m[j].legatura[k]->nume)// Daca nodul actual se regaseste si printre legaturile altui hexagon
									{	// fara 1 drum distanta
										if (k == 1)
										{
											m[j].legatura[6]->disp.player1 = false;
											m[j].legatura[6]->disp.player2 = false;
											m[j].legatura[2]->disp.player1 = false;
											m[j].legatura[2]->disp.player2 = false;
										}
										else if (k == 6)
										{
											m[j].legatura[1]->disp.player1 = false;
											m[j].legatura[1]->disp.player2 = false;
											m[j].legatura[5]->disp.player1 = false;
											m[j].legatura[5]->disp.player2 = false;
										}
										else
										{
											m[j].legatura[k - 1]->disp.player1 = false;
											m[j].legatura[k - 1]->disp.player2 = false;
											m[j].legatura[k + 1]->disp.player1 = false;
											m[j].legatura[k + 1]->disp.player2 = false;
										}
									}
									if (mat[c[i].nume][m[j].legatura[k]->nume].leg)
									{
										mat[c[i].nume][m[j].legatura[k]->nume].disp.player2 = true;
										mat[m[j].legatura[k]->nume][c[i].nume].disp.player2 = true;
									}
								}

								p2.asezari[p2.nr_asezari] = &c[i];
								p2.nr_asezari++;
								c[i].disp.player1 = false;
								c[i].disp.player2 = false;

								return;
							}
						}
					}
					else
					{
						if (este_deasupra(coordonate_casuta, x, y) && c[i].disp.player1)
						{
							if (colt_disponibil(1, c[i]))
							{
								casa = SDL_LoadBMP("casuta_p1.bmp");
								adauga_img_aici(casa, coordonate_casuta.x + 10, coordonate_casuta.y + 7, casute);
								SDL_FreeSurface(casa);
								SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
								p1.pct++;
								/*p2.nr_ture++;*/
								c[i].tip_asezare = 1;


								for (int vecini = 1; vecini <= 54; vecini++)
								if (mat[c[i].nume][vecini].leg && mat[c[i].nume][vecini].poteca.player1 == false && mat[c[i].nume][vecini].poteca.player2 == false)
								{
									mat[c[i].nume][vecini].disp.player1 = true;
									mat[vecini][c[i].nume].disp.player1 = true;
								}
								for (int j = 1; j <= 19; j++)
								for (int k = 1; k <= 6; k++)
								{
									if (c[i].nume == m[j].legatura[k]->nume)// Daca nodul actual se regaseste si printre legaturile altui hexagon
									{	// fara 1 drum distanta
										if (k == 1)
										{
											m[j].legatura[6]->disp.player1 = false;
											m[j].legatura[6]->disp.player2 = false;
											m[j].legatura[2]->disp.player1 = false;
											m[j].legatura[2]->disp.player2 = false;
										}
										else if (k == 6)
										{
											m[j].legatura[1]->disp.player1 = false;
											m[j].legatura[1]->disp.player2 = false;
											m[j].legatura[5]->disp.player1 = false;
											m[j].legatura[5]->disp.player2 = false;
										}
										else
										{
											m[j].legatura[k - 1]->disp.player1 = false;
											m[j].legatura[k - 1]->disp.player2 = false;
											m[j].legatura[k + 1]->disp.player1 = false;
											m[j].legatura[k + 1]->disp.player2 = false;
										}
									}
									if (mat[c[i].nume][m[j].legatura[k]->nume].leg)
									{
										mat[c[i].nume][m[j].legatura[k]->nume].disp.player1 = true;
										mat[m[j].legatura[k]->nume][c[i].nume].disp.player1 = true;
									}
								}

								p1.asezari[p1.nr_asezari] = &c[i];
								p1.nr_asezari++;
								c[i].disp.player1 = false;
								c[i].disp.player2 = false;

								return;
							}
						}
					}
				}
			}
		}
	}
}
bool ai_unde(player p, int index_player)
{
	if (index_player == 1)
	{
		for (int i = 1; i <= 54; i++)
		if (c[i].disp.player1)
			return true;
	}
	else
	{
		for (int i = 1; i <= 54; i++)
		if (c[i].disp.player2)
			return true;
	}
	return false;
}
bool ai_unde_oras(player p)
{
	for (int i = 0; i < p.nr_asezari; i++)
	if (p.asezari[i]->tip_asezare == 1)
		return true;
	return false;
}
void adauga_oras(player &p, int index_player, SDL_Surface * casute, SDL_Surface * ecran)
{
	bool ok = true;
	SDL_Event asteapta;
	while (ok)
	{
		while (SDL_PollEvent(&asteapta))
		{
			if (asteapta.type == SDL_MOUSEBUTTONDOWN)
			{
				int x = NULL, y = NULL;
				SDL_GetMouseState(&x, &y);
				for (int i = 1; i <= 54; i++)
				{
					SDL_Surface * oras;
					SDL_Rect coordonate_oras;
					coordonate_oras.x = c[i].coor_centru_x - 20;
					coordonate_oras.y = c[i].coor_centru_y - 20;
					coordonate_oras.h = 40;
					coordonate_oras.w = 40;
					if (index_player == 2)
					{
						
						if (este_deasupra(coordonate_oras, x, y) && c[i].tip_asezare == 1)
						{
								oras = SDL_LoadBMP("oras_p2.bmp");
								adauga_img_aici(oras, coordonate_oras.x + 10, coordonate_oras.y + 7, casute);
								SDL_FreeSurface(oras);
								SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
								p2.pct++;
								c[i].tip_asezare = 2;

								return;
						}
					}
					else
					{
						if (este_deasupra(coordonate_oras, x, y) && c[i].tip_asezare == 1)
						{
								oras = SDL_LoadBMP("oras_p1.bmp");
								adauga_img_aici(oras, coordonate_oras.x + 10, coordonate_oras.y + 7, casute);
								SDL_FreeSurface(oras);
								SDL_BlitSurface(casute, NULL, ecran, &casute->clip_rect);
								p1.pct++;
								c[i].tip_asezare = 2;


								return;
						}
					}
				}
			}
		}
	}
}

void negot(SDL_Surface * trade, player &p, SDL_Window * trade_window)
{
	SDL_Color rosu = { 255, 0, 0 };
	SDL_Color verde = { 0, 255, 0 };

	TTF_Font* Sans = TTF_OpenFont("LSANS.TTF", 24);
	SDL_Surface * minus = TTF_RenderText_Solid(Sans, "-4", rosu);
	SDL_Surface * plus = TTF_RenderText_Solid(Sans, "+1", verde);
	SDL_Rect lemn = setare_coordonate(475, 200, 50, 45);
	SDL_Rect pasnit = setare_coordonate(535, 200, 40, 50);
	SDL_Rect argila = setare_coordonate(580, 200, 48, 48);
	SDL_Rect mel = setare_coordonate(630, 200, 60, 50);
	SDL_Rect chiatra = setare_coordonate(690, 200, 55, 50);
	SDL_Rect poz;
	poz = minus->clip_rect;
	poz.y = 260;
	int tip_resursa_dau = 0;
	bool ok = true;
	SDL_Event asteapta;
	while (ok)
	{
		while (SDL_PollEvent(&asteapta))
		{
			if (asteapta.type == SDL_MOUSEBUTTONDOWN)
			{
				int x = NULL, y = NULL;
				SDL_GetMouseState(&x, &y);
				if (este_deasupra(lemn, x, y))
				{
					if (p.resurse[1] >= 4)
					{
						poz.x = lemn.x + 12;
						SDL_BlitSurface(minus, NULL, trade, &poz);
						SDL_UpdateWindowSurface(trade_window);
						bool vreau = true;
						SDL_Event astept_click;
						while (vreau)
						{
							while (SDL_PollEvent(&astept_click))
							{
								if (astept_click.type == SDL_MOUSEBUTTONDOWN)
								{
									int k = NULL, l = NULL;
									SDL_GetMouseState(&k, &l);
									if (este_deasupra(pasnit, k, l))
									{
										poz.x = pasnit.x + 5;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[1]-= 4;
										p.resurse[2]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;		
									}
									else if (este_deasupra(argila, k, l))
									{
										poz.x = argila.x + 10;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[1] -= 4;
										p.resurse[3]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(mel, k, l))
									{
										poz.x = mel.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[1] -= 4;
										p.resurse[5]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(chiatra, k, l))
									{
										poz.x = chiatra.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[1] -= 4;
										p.resurse[4]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
								}
							}
						}
					}
					else
					{
						SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
							"Hopa Gelu",
							"Nu fura! Nu ai suficiente resurse!",
							NULL);
					}
				}
				else if (este_deasupra(pasnit, x, y))
				{
					if (p.resurse[2] >= 4)
					{
						poz.x = pasnit.x + 5;
						SDL_BlitSurface(minus, NULL, trade, &poz);
						SDL_UpdateWindowSurface(trade_window);
						bool vreau = true;
						SDL_Event astept_click;
						while (vreau)
						{
							while (SDL_PollEvent(&astept_click))
							{
								if (astept_click.type == SDL_MOUSEBUTTONDOWN)
								{
									int k = NULL, l = NULL;
									SDL_GetMouseState(&k, &l);
									if (este_deasupra(lemn, k, l))
									{
										poz.x = lemn.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[2] -= 4;
										p.resurse[1]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(argila, k, l))
									{
										poz.x = argila.x + 10;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[2] -= 4;
										p.resurse[3]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(mel, k, l))
									{
										poz.x = mel.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[2] -= 4;
										p.resurse[5]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(chiatra, k, l))
									{
										poz.x = chiatra.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[2] -= 4;
										p.resurse[4]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
								}
							}
						}
					}
					else
					{
						SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
							"Hopa Gelu",
							"Nu fura! Nu ai suficiente resurse!",
							NULL);
					}
				}
				else if (este_deasupra(argila, x, y))
				{
					if (p.resurse[3] >= 4)
					{
						poz.x = argila.x + 10;
						SDL_BlitSurface(minus, NULL, trade, &poz);
						SDL_UpdateWindowSurface(trade_window);
						bool vreau = true;
						SDL_Event astept_click;
						while (vreau)
						{
							while (SDL_PollEvent(&astept_click))
							{
								if (astept_click.type == SDL_MOUSEBUTTONDOWN)
								{
									int k = NULL, l = NULL;
									SDL_GetMouseState(&k, &l);
									if (este_deasupra(lemn, k, l))
									{
										poz.x = lemn.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[3] -= 4;
										p.resurse[1]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(pasnit, k, l))
									{
										poz.x = pasnit.x + 5;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[3] -= 4;
										p.resurse[2]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(mel, k, l))
									{
										poz.x = mel.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[3] -= 4;
										p.resurse[5]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(chiatra, k, l))
									{
										poz.x = chiatra.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[3] -= 4;
										p.resurse[4]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
								}
							}
						}
					}
					else
					{
						SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
							"Hopa Gelu",
							"Nu fura! Nu ai suficiente resurse!",
							NULL);
					}
				}
				else if (este_deasupra(mel, x, y))
				{
					if (p.resurse[5] >= 4)
					{
						poz.x = mel.x + 12;
						SDL_BlitSurface(minus, NULL, trade, &poz);
						SDL_UpdateWindowSurface(trade_window);
						bool vreau = true;
						SDL_Event astept_click;
						while (vreau)
						{
							while (SDL_PollEvent(&astept_click))
							{
								if (astept_click.type == SDL_MOUSEBUTTONDOWN)
								{
									int k = NULL, l = NULL;
									SDL_GetMouseState(&k, &l);
									if (este_deasupra(lemn, k, l))
									{
										poz.x = lemn.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[5] -= 4;
										p.resurse[1]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(pasnit, k, l))
									{
										poz.x = pasnit.x + 5;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[5] -= 4;
										p.resurse[2]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(argila, k, l))
									{
										poz.x = argila.x + 10;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[5] -= 4;
										p.resurse[3]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(chiatra, k, l))
									{
										poz.x = chiatra.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[5] -= 4;
										p.resurse[4]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
								}
							}
						}
					}
					else
					{
						SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
							"Hopa Gelu",
							"Nu fura! Nu ai suficiente resurse!",
							NULL);
					}
				}
				else if (este_deasupra(chiatra, x, y))
				{
					if (p.resurse[4] >= 4)
					{
						poz.x = chiatra.x + 12;
						SDL_BlitSurface(minus, NULL, trade, &poz);
						SDL_UpdateWindowSurface(trade_window);
						bool vreau = true;
						SDL_Event astept_click;
						while (vreau)
						{
							while (SDL_PollEvent(&astept_click))
							{
								if (astept_click.type == SDL_MOUSEBUTTONDOWN)
								{
									int k = NULL, l = NULL;
									SDL_GetMouseState(&k, &l);
									if (este_deasupra(lemn, k, l))
									{
										poz.x = lemn.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[4] -= 4;
										p.resurse[1]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(pasnit, k, l))
									{
										poz.x = pasnit.x + 5;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[4] -= 4;
										p.resurse[2]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(argila, k, l))
									{
										poz.x = argila.x + 10;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[4] -= 4;
										p.resurse[3]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
									else if (este_deasupra(mel, k, l))
									{
										poz.x = mel.x + 12;
										SDL_BlitSurface(plus, NULL, trade, &poz);
										SDL_UpdateWindowSurface(trade_window);
										p.resurse[4] -= 4;
										p.resurse[5]++;
										SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
											"Bine Bo$$",
											"Bisnitareala incheiata cu succes!",
											NULL);
										SDL_FreeSurface(plus);
										SDL_FreeSurface(minus);
										SDL_DestroyWindow(trade_window);
										vreau = false;
										ok = false;
									}
								}
							}
						}
					}
					else
					{
						SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR,
							"Hopa Gelu",
							"Nu fura! Nu ai suficiente resurse!",
							NULL);
					}
				}
			}
			else if (asteapta.type == SDL_KEYDOWN )
			{
				if (asteapta.key.keysym.sym == SDLK_ESCAPE)
				{
					SDL_FreeSurface(plus);
					SDL_FreeSurface(minus);
					SDL_DestroyWindow(trade_window);
					ok = false;
				}
			}
		}
	}
}
