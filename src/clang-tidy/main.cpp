#include <iostream>

class Base
{
public:
	virtual void doThings()
	{
		std::cout << "Base" << std::endl;
	}
};

class Derived
{
public:
	void doThings()
	{
		std::cout << "Derived" << std::endl;
	}
};

int main(int argc, char *argv[])
{
	int x;
	std::cout << x << std::endl;

	Derived d;
	d.doThings();

	return 0;
}
