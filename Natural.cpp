#include "Natural.hpp"

Natural::Natural(unsigned int n)
{
	value = n;
}

Natural::~Natural(){}

unsigned int Natural::getValue()
{
	return value;
}

Natural Natural::suc()
{
	Natural n(value + 1);
	return n;
}

Natural Natural::soma(Natural n)
{
	Natural s(value + n.getValue());
	return s;
}

Natural Natural::mult(Natural n)
{
	if (n.getValue() == 0)
		return Natural(0);
	else if (n.getValue() == 1)
		return Natural(value);
	else
		return Natural(value + mult(n.getValue()-1).getValue());
}

int main()
{
	Natural n(23);
	std::cout << n.mult(3).suc().getValue() << std::endl;
	return 0;
}
