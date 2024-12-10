#include <iostream>

int main()
{
	int number = 10;

	std::cout << number << '\n';

	int* ptr = &number;

	*ptr = 20;

	std::cout << number;
}