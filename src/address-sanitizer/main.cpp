int main(int argc, char *argv[])
{
	int test[2] = { 0, 1 };

	// this will generate a warning
	int x = test[3];

	// this will not generate a warning
	int sum = 0;
	for (int i = 0; i < 5; ++i)
	{
		sum += test[i];
	}
    return 0;
}
