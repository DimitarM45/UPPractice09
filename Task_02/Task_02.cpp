#include <iostream>

int main()
{
	int number = 10;

	int* ptr = nullptr;

	if (!ptr)
	{
		ptr = &number;
	}

	std::cout << *ptr;
}