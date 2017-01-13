struct nod_colt{
	int nume;
	int asezare = 0;
	bool disp;
	int coor_centru_x;
	int coor_centru_y;
	int x;
	int y;
	int w = x + 36;
	int h = y + 36;
}c[55];

struct nod_centru{
	int nume;
	nod_colt legatura[7];
	int x;
	int y;
	int arie_x = x - 50; int arie_y = y - 70; int arie_w = x + 50; int arie_h = y + 70;
	int tip_resursa = 0;
	int nr;
	bool hot;
}m[20];
//tip_resursa:
//0 = nika;
//1 = lemn;
//2 = pasnet;
//3 = argila;
//4 = chiatra;
//5 = mel;