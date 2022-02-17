void createLeak()
{
	int *mem = new int[10];

	// do some more stuff
	// ...
	// ...
	// ...
	// ...
	// forget to delete
	//delete [] mem;
}

void invalidRead()
{
	int *mem = new int[10] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num = mem[10];

	delete [] mem;
}

int main(int argc, char *argv[])
{
	createLeak();
	invalidRead();
	return 0;
}
