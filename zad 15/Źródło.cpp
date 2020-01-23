#include "fig.h"

int main() {

	fig* wsk;
	rect X(2, 3);
	rect Y(7, 5);

	wsk = &X;
	wsk->draw();
	cout << endl << endl;
	wsk = &Y;
	wsk->draw();

	return 0;
}