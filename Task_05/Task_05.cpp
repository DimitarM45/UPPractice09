#include <iostream>

int main()
{
	int number = 100;

	int* ptr = &number;

	int** ptrPtr = &ptr;

	std::cout << **ptrPtr;
}