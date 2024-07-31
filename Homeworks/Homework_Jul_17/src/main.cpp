#include "utils.h"



void	Input (int& num)
{
	while(true)
	{
		std::cout << "Enter a number: ";
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


int main()
{
	int		a;
	int		b;
	const int	size = 40;
	const int	size_arr = 7;
	char 		str[size] = {};
	int		arr[] = {23, 4, -12, 54, 1, 2, 0};


	std::cout << "--------------------------------- Task 1 --------------------------------" << std::endl;	
	Input(a);
	Input(b);
	std::cout << "GCD: " << gcd(a,b) << std::endl;
	std::cout << "--------------------------------- Task 2 --------------------------------" << std::endl;	
	Input(a);
	std::cout << "Binary: ";
	binary(a);
	std::cout << std::endl;
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cout << "--------------------------------- Task 3 --------------------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.getline(str, size);	
	std::cout << "First Uppercase Letter: " << firstUppercase(str) << std::endl;
	std::cout << minArray(arr, size_arr) << std::endl;
	std::cout << "--------------------------------- Task 4 --------------------------------" << std::endl;
	printArr(arr, size_arr);
	std::cout << std::endl;
	std::cout << "--------------------------------- Task 5 --------------------------------" << std::endl;
	printArrReverse(arr, size_arr);
	std::cout << std::endl;	




}
