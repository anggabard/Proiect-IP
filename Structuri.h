#include <string>
using std::string;
struct disponibilitate{
	bool player1;
	bool player2;
};

struct drum{
	bool leg;
	disponibilitate disp;
	int x_centru;
	int y_centru;
};
struct nod_colt{
	int nume;
	int asezare; 
	disponibilitate disp;
	int coor_centru_x;
	int coor_centru_y;
	int x;
	int y;
	int w; 
	int h; 
}c[55];

struct nod_centru{
	int nume;
	nod_colt * legatura[7];
	int x_centru;
	int y_centru;
	int arie_x; 
	int arie_y;
	int arie_w;
	int arie_h;
	int tip_resursa;
	int nr;
	bool hot;
}m[20];
drum mat[55][55];
//tip_resursa:
//0 = nika;
//1 = lemn;
//2 = pasnet;
//3 = argila;
//4 = chiatra;
//5 = mel;

struct player{
	int resurse[6];
	string string_resurse[6];
	bool tura;
	int pct;
	nod_colt * asezari[10];
	drum * drumuri[20];
};
player p1;
player p2;
char zero = 48;
char sapte = 55;
 