#pragma once
#ifndef FIG_H

class fig {
public:
	virtual void draw() = 0;
	virtual void change_sign() = 0;
	virtual ~fig();
};

class rect : public fig {
private:
	int x, y;
	char sign;
public:
	rect(int a = 1, int b = 1, char s = '.') {
		x = a;
		y = b;
		sign = s;
	};
	virtual void draw();
	virtual void change_sign();
	void change_size(int a, int b);
	~rect();
};


#endif