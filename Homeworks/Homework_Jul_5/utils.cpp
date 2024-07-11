#include "utils.hpp"

int	my_strlen(char *str)
{
	int len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return len;
}

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


bool	IsPrime(int& num)
{
	for (int i = 2; i < num / 2; i++)
		if (num % i == 0)
			return false;
	return true;
}

int	PrimeAdditives(int num)
{
	int diff = 0;
	for (int i = 1; i < num; i++)
	{	
		if (IsPrime(i))
		{
			diff = num - i;
			if (IsPrime(diff))
				return 1;
		}
	}
	return 0;
}

int	DigitCount (int& num)
{
	int	counter = 0;
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		num /= 10;
		counter++;
	}
	return counter;
}

int	Power (int num, int exp)
{
	int	res = 1;
	for (int i = 0; i < exp; i++)
		res *= num;
	return res;
}

int	LargestDigitInNumber(int num)
{
	int	max = 0;
	int	digit;	

	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		digit = num % 10;
		if (digit > max)
			max = digit;
		num /= 10;
	}
	return max;
}

void	Print (char *str, const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;
}

void	ReversePrint (char *str, const int size)
{
	for (int i = size - 1; i > 0; i--)
		std::cout << str[i] << " ";
	std::cout << std::endl;
}


int	Fibonacci (int n)
{
	int	res;
	int	first = 0;
	int	second = 1;
	if (n <= 0)
		return 0;
	else if (n == 1)
		return first;
	else if (n == 2)
		return second;
	while (n > 0)
	{
		res = first + second;
		first = second;
		second = res;
		n--;
	}
	return res;
}


int	SumOfDigits (int num)
{
	int	sum = 0;
	
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum;
}



















