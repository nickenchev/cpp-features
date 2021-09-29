#include <iostream>

template <int Mode>
class Worker
{
public:
	void doWork(int input)
	{
		int result = 0;
		if constexpr (Mode == 0)
		{
			std::cout << input * 10 << std::endl;
		}
		else
		{
			std::cout << input * 100 << std::endl;
		}
	}
};
	
int main(int argc, char *argv[])
{
	Worker<0> worker1;
	worker1.doWork(5);

	Worker<1> worker2;
	worker2.doWork(5);

    return 0;
}
