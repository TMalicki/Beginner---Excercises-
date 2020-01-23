#include <iostream>

using namespace std;

int main() {

	int x;

	cout << "Witaj, podaj liczbe calkowita (q by wyjsc z programu): ";
	while (cin >> x) {
		
		if (x % 2 == 0) cout << "Podana liczba jest parzysta";
		else cout << "Podana liczba jest nieparzysta";
		cout << "\n\nWitaj, podaj liczbe calkowita (q by wyjsc z programu): ";
	}

	cout << endl << "koniec.";

	return 0;
}