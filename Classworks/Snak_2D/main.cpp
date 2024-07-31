#include <iostream>

void inputInt(int& num, char *str);
void inputMatrix(int **arr, const int& rows, const int&cols);

int main()
{
	int **matrix;
	int	rows = 0;
	int	cols = 0;	
	
	inputInt(rows, (char*) "Enter rows: ");
	inputInt(cols, (char *)"Enter cols: ");
	
	matrix = new int*[rows];
	if (rows)
	{
		for (int i = 0; i < rows; ++i)
			matrix[i] = new int[cols];
	}
	inputMatrix(matrix, rows, cols);
	
	

}


void snack2D(int **arr, int rows, int cols)
{
	int x_axis = rows;
	int y_axis = cols;
	int i = 0;
	int j = 0;
	while (cols > 0)
	{
		while ( i < x_axis)
			std::cout << arr[i++][j] << " ";
		while (j < y_axis
	}
}


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


