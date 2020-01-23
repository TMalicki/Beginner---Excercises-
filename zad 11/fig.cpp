#include "fig.h"
#include <iostream>

using namespace std;

fig::~fig()
{
}

void rect::draw()
{
	cout << "Rysuje:\n";
	for (int j = 0; j < y; j++) {
		for (int i = 0; i < x; i++) {
			cout << sign;
		}
		cout << endl;
	}
	cout << endl << endl;
}

void rect::change_sign()
{
	cout << "Podaj znak ktory ma wypelnic figure: ";
	if(cin >> sign) cout << "Zmieniono znak.\n";
}

void rect::change_size(int a, int b)
{
	x = a;
	y = b;
	cout << "Zmieniono rozmiar.\n";
}

rect::~rect()
{
}
