#include "fig.h"

rect::rect(int a, int b, char s) {
	x = a;
	y = b;
	sign = s;
}

void rect::draw()
{
	if (x <= 2 || y <= 2) {
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				cout << sign;
			}
			cout << endl;
		}
	}
	else {
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				if (i == 0 || i == (y-1)) cout << sign;
				else {
					if (j == 0 || j == x - 1) cout << sign;
					else cout << " ";
				}
			}
			cout << endl;
		}
	}
}

rect::~rect()
{
	cout << "\nUSUNIETO RECT\n";
}

fig::~fig()
{
	cout << "\nUSUNIETO FIG\n";
}
