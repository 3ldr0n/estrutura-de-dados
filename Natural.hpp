#include <iostream>

class Natural {
private:
	unsigned int value;
public:
	Natural(unsigned int n);
	~Natural();
	unsigned int getValue();
	Natural suc();
	Natural soma(Natural n);
	Natural mult(Natural n);
};
