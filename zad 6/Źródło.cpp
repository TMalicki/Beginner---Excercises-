#include <iostream>

using namespace std;

int main() {

	double a, b, x;

	cout << "Podaj poczatek przedzialu: ";
	cin >> a;
	
	cout << "Podaj koniec przedzialu: ";
	cin >> b;

	while (a > b) {
		cout << "Zle, liczba konczaca przedzial musi byc wieksza od liczby rozpoczynajacej przedzial.\nPodaj koniec przedzialu: ";
		cin >> b;
	}

	cout << "Podaj dowolna liczbe: ";
	cin >> x;

	if (x >= a && x <= b) cout << "Liczba x miesci sie w zdefiniowanym przedziale.\n";
	else cout << "Liczba x nie miesci sie w zdefiniowanym przedziale.\n";

	return 0;
}