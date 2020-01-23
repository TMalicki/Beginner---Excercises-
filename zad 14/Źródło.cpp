#include <iostream>

using namespace std;

void draw(int n) {
	const int max = n + (n + 1);
	int center = (max / 2);
	char *wsk = new char [max];
	
	for (int l = 0; l < max; l++) wsk[l] = ' ';

	for (int i = 1; i <= n; i++) { // ilosc trojkatow
		for (int j = 0; j < i+1; j++) { // ilosc rzedow w trojkacie
			for (int k = center-j; k <= center+j; k++) { // ilosc maks kropek w trojkacie
				wsk[k] = '+';
			}
			for (int z = 0; z < max; z++) {
				cout << wsk[z];
			}
			for (int z = 0; z < max; z++) wsk[z] = ' ';
			cout << endl;
		}
	}
}

int main() {
	draw(5);
}