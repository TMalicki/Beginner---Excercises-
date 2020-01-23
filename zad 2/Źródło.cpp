#include <iostream>
#include <math.h>
using namespace std;

double fun(double x) {
	return x * x* x;
}

int main() {

	double x;
	cout << "Podaj liczbe ktora podniesiona zostanie do szcescianu: ";
	cin >> x;
	
	cout << "\nSzescian liczby " << x;
	cout << " wynosi: ";
	cout << fun(x);

	return 0;
}