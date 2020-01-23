#pragma once
#ifndef FIG_H
#include <iostream>

using namespace std;

class fig {

private:

public:
	virtual void draw() = 0;
	virtual ~fig();
};

class rect : public fig {

private:
	int x = 0, y = 0;
	char sign = ' ';
public:
	rect(int a = 1, int b = 1, char s  = '+');
	virtual void draw();
	virtual ~rect();
};

#endif