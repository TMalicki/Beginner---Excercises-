#include <iostream>

using namespace std;

int main() {

	int a, b;

	cout << "Witaj, podaj liczbe a: ";
	cin >> a;
	cout << "\n ,a teraz podaj liczbe b: ";
	cin >> b;

	if (a % b == 0) cout << "Liczba a jest podzielna przez b.";
	else if (b % a == 0) cout << "Liczba b jest podzielna przez a.";
	else cout << "Liczba sie nie dziela przez siebie w zaden sposob.";
	cout << endl;

}