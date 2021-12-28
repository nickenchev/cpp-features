#include <iostream>

constexpr bool enableLogging = false;

template <bool Mode>
constexpr void doWork(int input)
{
	if constexpr (Mode == 0)
	{
		std::cout << input * input << std::endl;
	}
	else
	{
		std::cout << input << std::endl;
	}
}
	
int main(int argc, char *argv[])
{
	
	doWork<true>(5);

	doWork<false>(5);

    return 0;
}
