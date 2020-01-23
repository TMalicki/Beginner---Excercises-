#include <iostream>
#include "fig.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	rect F1;
	rect F2(4, 6, 't');

	F1.draw();
	F1.change_sign();
	F1.draw();
	F1.change_size(2, 2);
	F1.draw();

	fig* wsk;
	wsk = &F2;
	wsk->draw();

	cout << endl << endl;
}