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


int	Factorial (int n)
{
	if (n == 0)
		return 1;
	return n * Factorial(n - 1);
}


int	PrintIntegers (int n)
{
	std::cout << n << " ";
	if (n < 0)
		return 0;
	return PrintIntegers (n - 1);
}


int	Fibonacci (int n)
{
	if (n <= 2){
		return 1;
	}
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
void	PrintArray (const char *str)
{
	if (!*(str)){
		return ;
	}
	PrintArray(((*str) - 1));
	std::cout << *str << " ";
	
}
int	RepeatedCount (char *str, int c);
int	MaxInArray (char *str);
int	OddCount (char *str);
bool	IsPolindrome (char *str);
