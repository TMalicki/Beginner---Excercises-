#include <iostream>

using namespace std;

int main() {

	int THREE[100]{};
	int FIVE[100]{};

	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i <= 100; i++) {
		if (i % 3 == 0) {
			cout << "Liczba " << i << " podzielna przez 3\n";
			THREE[cnt1] = i;
			cnt1++;
		}
		if (i % 5 == 0) {
			cout << "Liczba " << i << " podzielna przez 5\n";
			FIVE[cnt2] = i;
			cnt2++;
		}
 	}

	cout << endl << endl;
	cout << "Liczby podzielne przez 3\n";
	for (int i = 0; i < cnt1; i++) {
		cout << THREE[i] << endl;
	}

	cout << "\n\nLiczby podzielne przez 5\n";
	for (int i = 0; i < cnt2; i++) {
		cout << FIVE[i] << endl;
	}

	return 0;
}