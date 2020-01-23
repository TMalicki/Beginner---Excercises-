#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	cout << "---------WARTOSCI FUNKCJI TRYGONOMETRYCZNYCH: ----------" << endl;
	
	cout << "-> Sinus: \n";
	cout << "\t0 stopni - " << sin(0);
	cout << "\n\t30 stopni - " << sin(M_PI/6);
	cout << "\n\t60 stopni - " << sin(M_PI/3);
	cout << "\n\t90 stopni - " << sin(M_PI / 2);
	cout << "\n\t120 stopni - " << sin(M_PI * 2 / 3);
	cout << endl << endl;
	cout << "-> Cosinus: \n";
	cout << "\t0 stopni - " << cos(0);
	cout << "\n\t30 stopni - " << cos(M_PI / 6);
	cout << "\n\t60 stopni - " << cos(M_PI / 3);
	cout << "\n\t90 stopni - " << cos(M_PI / 2);
	cout << "\n\t120 stopni - " << cos(M_PI * 2 / 3);
	cout << endl << endl;
	cout << "-> Tangens: \n";
	cout << "\t0 stopni - " << tan(0);
	cout << "\n\t30 stopni - " << tan(M_PI / 6);
	cout << "\n\t60 stopni - " << tan(M_PI / 3);
	cout << "\n\t90 stopni - " << tan(M_PI / 2);
	cout << "\n\t120 stopni - " << tan(M_PI * 2 / 3);
	cout << endl << endl;
	return 0;
}