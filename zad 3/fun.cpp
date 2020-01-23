#include "fun.h"

using namespace std;

double a = 0.0; 
double b = 0.0;

double sum(double x, double y) {
	return x + y;
}

double sub(double x, double y) {
	return x - y;
}

double mult(double x, double y) {
	return x * y;
}

double div(double x, double y) {
	if (y != 0) return x / y;
	else {
		cout << "Blad! Nie mozna dzielic przez zero!";
	}
}

void fun(double x, double y) {

	cout << "Podano liczby: " << x << " oraz " << y << endl;
	cout << "Wynik dodawania: " << sum(x, y);
	cout << "\nWynik odejmowania: " << sub(x, y);
	cout << "\nWynik mnozenia: " << mult(x, y);
	cout << "\nWynik dzielenia: " << div(x, y);
}

void ask() {
	cout << "Podaj dwie liczby: ";
	cin >> a >> b;

	fun(a, b);
}