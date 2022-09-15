#include <iostream>
#include <new>

int main(int argc, char* argv[])
{
	double* pointer;
	int counter = 1;
	do
	{
		try
		{
			pointer = new double[100000];
		}
		catch (std::bad_alloc err)
		{
			std::cout << "error in space allocation\n";
			return 1;
		}
		std::cout << "space allocation in progress, counter: "<<counter<<'\n';
		counter++;
	} while (pointer);
	std::cout << "\n";
	return 0;
}