using std::to_string;
void creare_harta(nod_centru m[], nod_colt c[])
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
		c[i].asezare = 0;
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
	p1.pct = 0;
	p2.pct = 0;
	p1.tura = true;
	p2.tura = false;

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
	tabla = SDL_LoadBMP("Fundal.bmp");
	SDL_Rect coord_tabla;
	coord_tabla = tabla->clip_rect;
	coord_tabla.x = 0;
	coord_tabla.y = 0;
	SDL_BlitSurface(casute, NULL, tabla, &casute->clip_rect);
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