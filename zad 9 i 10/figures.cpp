#include "figures.h"

using namespace std;

void square::pole()
{
	cout << "Pole kwadratu o boku " << a << " wynosi: " << a * a << endl;
}

square::~square()
{
}

void circle::pole()
{
	cout << "Pole kola o promieniu " << r << " wynosi: " << 2 * pi * r << endl;
}

circle::~circle()
{
}

void rectangle::pole()
{
	cout << "Pole prostokata o bokach " << x << " i " << y << " wynosi: " << x * y << endl;
}

rectangle::~rectangle()
{
}

figures::~figures()
{
	cout << "Usunieto figures";
}
