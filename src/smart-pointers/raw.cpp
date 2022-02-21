#include "thing.h"

class Owner
{
	Thing *thing;
public:
	Owner()
	{
		thing = new Thing(10);
	}

	~Owner()
	{
		delete thing;
	}
};

int main(int argc, char *argv[])
{
	Owner user;

    return 0;
}
