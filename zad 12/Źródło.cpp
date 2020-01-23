#include <iostream>

using namespace std;

long power(int n) {
	if (n == 1) return 1;
	else return power(n - 1) * n;
}

int main() {

	int a;
	cout << "Podaj liczbe, ktorej silnia zostanie obliczona: ";
	if (cin >> a)
		cout << "Silnia liczby " << a << " wynosi: " << power(a);
	else cout << "Blad!";

	return 0;
}