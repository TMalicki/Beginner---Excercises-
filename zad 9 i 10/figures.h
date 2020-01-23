#pragma once
#ifndef FIGURES_H

#include <iostream>

class figures {

private:

public:
	virtual void pole() = 0;
	virtual ~figures();
};

class square : public figures {

private:
	double a;
public:

	square(double x) { a = x; };
	virtual void pole();
	~square();
};

class circle : public figures {

private:
	double r;
	const double pi = 2.14;
public:

	circle(double a) { r = a; };
	virtual void pole();
	~circle();
};

class rectangle : public figures {

private:
	double x, y;
public:

	rectangle(double a = 0, double b = 0) {
		x = a;
		y = b;
	}
	virtual void pole();
	~rectangle();
};

//void calc(figures* w);

inline void calc(figures* w) {
	w->pole();
}

#endif