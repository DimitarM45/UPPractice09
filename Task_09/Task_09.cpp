#include <iostream>

constexpr unsigned short MAX_ARR_SIZE = 5;
constexpr unsigned short NEW_ARR_SIZE = MAX_ARR_SIZE / 2;

int* getHalfArray(int* arr)
{
	return arr + (MAX_ARR_SIZE / 2);
}

int main()
{

	int arr[MAX_ARR_SIZE] = { 1, 2, 3, 4, 5 };
	
	for (int i = 0; i < MAX_ARR_SIZE; i++)
	{
		std::cout << arr[i] << ' ';
	}

	std::cout << '\n';

	int* newArrPtr = getHalfArray(arr);

	int newArr[NEW_ARR_SIZE];

	for (int i = 0; i < NEW_ARR_SIZE; i++)
	{
		newArr[i] = *(newArrPtr + i);
	}

	for (int i = 0; i < NEW_ARR_SIZE; i++)
	{
		std::cout << newArr[i] << ' ';
	}
}