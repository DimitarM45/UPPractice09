#include <iostream>

int main()
{
	int a = 10;
	int b = 20;
	int temp = a;

	std::cout << a << '\n';
	std::cout << b << '\n';

	int* ptrA = &a;
	int* ptrB = &b;
	int* tempPtr = &temp;
	
	*tempPtr = *ptrA;
	*ptrA = *ptrB;
	*ptrB = *tempPtr;

	std::cout << a << '\n';
	std::cout << b << '\n';
}