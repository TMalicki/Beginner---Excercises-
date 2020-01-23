#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	int T[2];

	srand(time(NULL));

	for (int i = 0; i < 20; i++) {
		T[0] = (rand() % 900) + 100; //(zakres 100 - 1000)
		T[1] = (rand() % 900) + 100;
		cout << T[0] << "   " << T[1] << endl;

		if (T[0] % T[1] == 0) cout << "Liczba " << T[0] << " jest podzielna przez liczbe " << T[1] << endl;
		else if (T[1] % T[0] == 0) cout << "Liczba " << T[1] << " jest podzielna przez liczbe " << T[2] << endl;
		else cout << "Liczby nie sa przez siebie podzielne\n";
	}

	

	return 0;
}