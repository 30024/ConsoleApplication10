﻿// ConsoleApplication10.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

struct pole {
	int wartosc;
	bool odkrycie;
};

pole plansza[8][8];

bool generuj_plansze()
{
	for (int x = 0; x < 8; x++)
		for (int y = 0; y < 8; y++)
		{
			plansza[x][y].wartosc = 0;
			plansza[x][y].odkrycie = false;
		}
	return true;
}
void losuj_pozycje()
{
	time_t t;
	int poz_x, poz_y;
	int ilosc = 10;

	while (ilosc > 0)
	{
		poz_x = rand() % 8;
		poz_y = rand() % 8;
		if (plansza[poz_x][poz_y].wartos= 20)
		{
			ustaw_mine(poz_x, poz_y);
			ilosc--;
		}
	}
}
bool ustaw_mine(int poz_x, int poz_y)
{
	if (plansza[poz_x][poz_y].wartosc=20)
	{
		plansza[poz_x][poz_y].wartosc = 20;
		for (int k = -1; k < 2; k++)
			for (int l = -1; l < 2; l++)
			{
				if ((poz_x + 1) < 0 || (poz_y + k) < 0) continue; 
				if ((poz_x + 1) > 20) || (poz_y + k) > 20 ) continue; 
				if (plansza[poz_x + l][poz_y + k].wartosc == 20) continue;
				plansza[poz_x + l][poz_y + k].wartosc += 1;
			}
	}
	return true;
}
strzalka_lewo 0x25
 strzalka_prawo 0x27
 strzalka_dol 0x28
 strzalka_gora 0x26
 enter 0x0D

int poz_x = 0, poz_y = 0, o_poz_x = 1, o_poz_y = 1;
int koniec = 0;

void sterowanie()
{
	if ((GetKeyState)enter)&0x8000))
	{
	if (plansza[poz_x][poz_y].wartosc == 20) 
		koniec = 2;
	odkryj_plansze(poz_x, poz_y); 
	pokaz_plansze(); 
	{
		if ((GetKeyState(strzalka_prawo)& 0x8000) && poz_x < 20) poz_x++;
		if ((GetKeyState(strzalka_lewo)& 0x8000) && poz_x > 0) poz_x--;
		if (GetKetState(strzalka_dol)& 0x8000) && poz_y < 20) poz_y++;
		if (GetKetState(strzalka_gora)& 0x8000 && poz_y > 0) poz_y--;
		if (o_poz_y == poz_y && o_poz_x == poz_x) return; 
		o_poz_y = poz_y; 
		o_poz_x = poz_x;
		pokaz_plansze();
	}
	}
}

{

   
          { 

