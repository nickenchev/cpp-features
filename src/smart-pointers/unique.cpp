#include <memory>
#include "thing.h"

class Owner
{
	std::unique_ptr<Thing> thing;

public:
	Owner()
	{
		thing = std::make_unique<Thing>(10);
	}
};

int main(int argc, char *argv[])
{
	Owner owner;
    return 0;
}
