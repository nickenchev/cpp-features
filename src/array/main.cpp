#include <iostream>
#include <array>

int sum(int numbers[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += numbers[i];
	}

	return sum;
}

template <size_t Size>
int sum(const std::array<int, Size> &numbers)
{
	int sum = 0;
	for (auto n : numbers)
	{
		sum += n;
	}
	return sum;
}

// concepts ts
int sum(auto &numbers)
{
	int sum = 0;
	for (auto n : numbers)
	{
		sum += n;
	}
	return sum;
}

int main(int argc, char *argv[])
{
	int numbers[3] = { 5, 10, 15 };
	std::array<int, 3> numbers2 { 5, 10, 15 };

	int total = sum(numbers, 3);
	total = sum(numbers2);

	std::cout << "Sum: " << total << std::endl;

    return 0;
}
