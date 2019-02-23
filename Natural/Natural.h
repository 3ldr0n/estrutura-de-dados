#ifndef NATURAL_H
#define NATURAL_H

#include <iostream>

class Natural {
private:
	unsigned int value;
public:
	Natural(unsigned int n);
	~Natural();
	unsigned int getValue();
	Natural suc();
	Natural operator+(Natural n);
	Natural mult(Natural n);
	friend std::ostream &operator<<(std::ostream &out, Natural &n);
};

#endif
