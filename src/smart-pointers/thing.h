#ifndef THING_H
#define THING_H

#include <iostream>

class Thing
{
	int number;
	
public:
	Thing(int number)
	{
		this->number = number;
		std::cout << "Constructor" << std::endl;
	}

	~Thing()
	{
		std::cout << "Destructor" << std::endl;
	}
};

#endif /* THING_H */
