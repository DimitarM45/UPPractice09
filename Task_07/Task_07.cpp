#include <iostream>

void modifyValue(int* ptr, int newValue)
{
	*ptr = newValue;
}

int main()
{
	int number = 100;

	modifyValue(&number, 50);

	std::cout << number;
}