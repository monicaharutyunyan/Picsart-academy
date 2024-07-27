#include "utils.h"


void	printStr(char *str)
{
	while (*str)
		std::cout << *str++ << std::endl;
}

int	gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd (b, a % b);

}

void	binary(int num)
{
	if (num < 1)
		return ;
	int next = num / 2;
	
	binary (next);
	std::cout << num % 2;
}

char	firstUppercase(char *str)
{
	if (!*str)
		return 0;
	if (*str >= 'A' && *str <= 'Z')
	{
		//std::cout << *str << std::endl;
		return *str;
	}
	return firstUppercase(str + 1);

}

int	min(int a, int b)
{
	return a < b ? a : b;
}

int	minArray(int arr[], int size)
{
	if (size == 1)
		return arr[0];
	return min(arr[size - 1], minArray(arr, size - 1));
}

void	printArr(int arr[], int size)
{
	if (size == 1)
	{
		std::cout << arr[size - 1] << " ";
		return;
	}
	printArr(arr, size - 1);
	std::cout << arr[size - 1] << " ";
}

void	printArrReverse(int arr[], int size)
{	
	if (size == 1)
	{
		std::cout << arr[size - 1] << " ";
		return;
	}

	std::cout << arr[size - 1] << " ";
	printArrReverse(arr, size - 1);
}

