#include <iostream>

using namespace std;

int main() {

	char x;
	int amount;

	cout << "Podaj znak: ";
	cin >> x;
	cout << "Podaj ile razy wyswietlic znak: ";
	cin >> amount;

	for (int i = 1; i <= amount; i++) {
		cout << x;
		if (i % 10 == 0) cout << endl;
	}

	cout << endl;
	return 0;
}