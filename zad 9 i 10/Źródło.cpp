#include <iostream>
#include "figures.h"

/*
void calc(figures* w) {
	w->pole();
}
*/

int main() {

	figures* wsk;
	square kwadrat(5);
	circle kolo(3);
	rectangle prostokat(2, 6);

	wsk = &kolo;
	wsk->pole();

	wsk = &kwadrat;
	wsk->pole();

	wsk = &prostokat;

	calc(wsk);

	std::cout << std::endl;

	return 0;
}