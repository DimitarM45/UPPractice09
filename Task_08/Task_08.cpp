#include <iostream>

int main()
{
	int a = 5;
	int b = 6;

	const int* ptr1 = &a;

	// First example: pointer to a constant 
	// const int* doesn't prohibit changes to the ptr1 value (the address that it holds)
	ptr1 = &b;

	// but it prohibits changes to the value of the variable whose address it holds
	*ptr1 = 10;

	// Second example: constant pointer
	int* const ptr2 = &b;
	
	// int* const doesn't prohibit changes to the value of the variable whose address it holds
	*ptr2 = 10;

	// but it prohibits changes to the value of the pointer itself (e.g. assigning a new address to it)
	ptr2 = &a;
}
