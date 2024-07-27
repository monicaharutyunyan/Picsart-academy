#include "utils.h"

void	inputInt (int& num, char *str)
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

void	inputMatrix(int **arr, const int& rows, const int& cols)
{
	for (int i = 0; i < rows; ++i)
	{	
		std::cout << "-----------------------------------" << std::endl;
		for (int j = 0; j < cols; ++j)
			inputInt(arr[i][j],(char *) "Enter elements: ");
	}
}

int main()
{
	int	rows = 0;
	int	cols = 0;	
	const int	size = 11;
	int		arr[size] = {0, 13, 4, 2, 3, 45, 57, 6, 78, 88, 9};
	int		**matrix;
	std::cout << "---------------------- Task 1 ----------------------" << std::endl;  
	std::cout << "Binary Search: " <<  binarySearch(arr, 88, 0, size - 1) << std::endl; 


	std::cout << "---------------------- Matrix Input ----------------------" << std::endl; 		
	inputInt(rows, (char*) "Enter rows: ");
	inputInt(cols, (char *)"Enter cols: ");
	
	matrix = new int*[rows];
	if (rows)
	{
		for (int i = 0; i < rows; ++i)
			matrix[i] = new int[cols];
	}
	inputMatrix(matrix, rows, cols);
	std::cout << "---------------------- Task 2 ----------------------" << std::endl; 
	printMatrix(matrix, rows, cols);
	std::cout << "---------------------- Task 3 ----------------------" << std::endl; 
	std::cout << "Addition of main diagonal: " << sumOfMainDiagonalLine(matrix, rows) << std::endl;
	std::cout << "---------------------- Task 4 ----------------------" << std::endl; 
	theMaxValueInTheArray(matrix, rows, cols);
	
	std::cout << "---------------------- Task 5 ----------------------" << std::endl; 
	printMatrix(replaceEvenIndexesInMatrix(matrix, rows, cols), rows, cols);
	
	std::cout << "---------------------- Task 6 ----------------------" << std::endl; 
	std::cout << "Addition of Auxiliary Diagonal Members: " << sumOfAuxiliaryDiagonalsMember(matrix, rows, cols) << std::endl;
	
	std::cout << "---------------------- Task 7 ----------------------" << std::endl; 
	swapMatrixDiagonalsValues(matrix, rows, cols);
	printMatrix(matrix, rows, cols);
	std::cout << "---------------------- Task 8 ----------------------" << std::endl; 
	std::cout << "Addition of up to main diagonals members: " << sumOfValuesUpMainDiagonals(matrix, rows, cols) << std::endl;
	for (int i = 0; i < rows; ++i)
		delete [] matrix[i];
	delete[] matrix;
	matrix = nullptr;
	return 0;
}
