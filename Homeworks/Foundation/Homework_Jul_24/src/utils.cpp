#include "utils.h"

void	inputInt (int& num, const char *str)
{
	while(true)
	{
		std::cout << str;
		std::cin >> num;
		if(!std::cin)
		{
			std::cout << "It's not a number, try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000,'\n');
		}
		else
			break;
		std::cin.clear();
	}
}

void	printIntArr(int* arr, const int size)
{
	if (size == 1)
	{
		std::cout << arr[size - 1] << " ";
		return;
	}
	printIntArr(arr, size - 1);
	std::cout << arr[size - 1] << " ";
}

int*	get_dynamic_array(int n)
{
	int *arr = new int [n];
	for (int i = 0; i < n; ++i)
		inputInt(arr[i], "Enter element: ");
	return arr;	
}


int*	resize_dynamic_array(int *arr, int old_size, int new_size)
{
	int	*new_array = new int [new_size];
	int	actual_size = old_size > new_size ? new_size : old_size;
	for (int i = 0; i < actual_size; ++i)
		new_array[i] = arr[i];
	return new_array;
}


int	sum_dynamic_array(int* arr, int size);
int*	get_primes_array(int n);
int**	get_dynamic_2d_array(const int row, const int col);

char*	get_dynamic_string(int length);
char*	concat_dynamic_strings(char *str1, char *str2);
