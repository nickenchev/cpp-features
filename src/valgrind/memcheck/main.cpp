void doWork()
{
	int *mem = new int[10];

	// do some more stuff
	// ...
	// ...
	// ...
	// ...
	// forget to delete
	//delete mem;
	//delete [] mem;
}

int main(int argc, char *argv[])
{
	doWork();
	return 0;
}
