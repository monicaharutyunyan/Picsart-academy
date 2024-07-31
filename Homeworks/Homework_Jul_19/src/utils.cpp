#include "utils.h"


int	binarySearch (int* arr, int target, int left, int right)
{
	if (right >= left)
	{
		int mid = left + ((right - left) / 2);
		if (arr[mid] == target)
			return mid;
		if (target < arr[mid])
			return binarySearch(arr, target, left, mid - 1);
		return binarySearch(arr, target, mid + 1, right);
	}
	return -1;

}
int	sumOfMainDiagonalLine (int* arr[], const int row)
{
	if (row == 1)
		return arr[row - 1][row - 1];
	return arr[row - 1][row -1] + sumOfMainDiagonalLine(arr, row - 1);
}
int**	replaceEvenIndexesInMatrix(int* arr[], const int n, const int m)
{
	for (int i = 1; i < n; ++i)
	{
		if (i % 2 == 0)
			for (int j = 0; j < m; ++j)
				arr[i][j] = 0;
	}
	return arr;

}
int	sumOfAuxiliaryDiagonalsMember(int* arr[], const int n, const int m)
{
	int	i = 0;
	int	j = m - 1;
	int	sum = 0;

	while (i < n && j >= 0)
	{
		sum += arr[i][j];
		++i;
		--j;		
	}
	return sum;
}
int	sumOfValuesUpMainDiagonals(int* arr[], const int n, const int m)
{
	int	j;
	int	sum = 0;
	
	for (int i = 0; i < n - 1; ++i)
	{
		j = i;
		while (j < m - 1)
			sum += arr[i][j++];	
	}
	return sum;
}

void	swapMatrixDiagonalsValues(int** arr, const int n, const int m)
{
	int	tmp;
	int	i = 0;
	int	j = m - 1;
	while (i < n - 1)
	{
		tmp = arr[i][i];
		arr[i][i] = arr[i][j - i];
		arr[i][j - i] = tmp;
		++i;
	}
}


void	theMaxValueInTheArray(int* arr[], const int n, const int m)
{
	int	max = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (max < arr[i][j])
				max = arr[i][j];
		}
	}
	if (max != INT_MIN)
		std::cout << "The maximum value in the array is " << max << std::endl;
}
void	printMatrix (int* arr[], const int rows, const int cols)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
			std::cout << arr[i][j] << " ";
		std::cout << std::endl;
	}
}
/*
void	printMatrixRecursive(int* arr[], const int rows, const int cols)
{
	t f (rows == 0)
	{
		return;
	}
	printMatrixRecursive(arr, rows - 1, cols);
	if (cols == 0)
	{
	//	std::cout << arr[rows][cols] << " " ;
		return ;
	}
	printMatrixRecursive(arr, rows , cols - 1);
	if ( cols == c - 1)
		std::cout << arr[rows + 1][0] << " ";
	else
		std::cout << arr[rows][cols] << " ";

}

*/


