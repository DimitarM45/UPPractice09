#include <iostream>

constexpr unsigned short MAX_ARR_SIZE = 10;

int main()
{
	int arr[MAX_ARR_SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* arrCopy = copyArr(arr);

	for (int i = 0; i < MAX_ARR_SIZE; i++)
	{
		std::cout << *(arrCopy + i) << ' ';
	}
}