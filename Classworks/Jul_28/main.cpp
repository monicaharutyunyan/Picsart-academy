#include <iostream>

bool is_even(int);
int foo(int);
void printBinary(int);
int isPowerOftwo(int num);



int main()
{
	int n = 8;
	std::cout << is_even(n) << std::endl;
	std::cout << "1: " << foo(n) << std::endl;
	printBinary(n);
	std::cout << std::endl;
	std::cout << isPowerOftwo(n) << std::endl;
}



void printBinary(int num)
{
	if (!num)
		return;
	printBinary(num >> 1);
	std::cout << (num & 1) << " ";
}

int isPowerOftwo(int num)
{
	while(num)
	{
		if (!(num & 1) && !(num >> 1))
		{
			return 1;
		}
		num = num >> 1;
	}
	return 0;
}

bool is_even(int num)
{
	return !(num & 1);
}

int foo(int num)
{
	int len = 0;
	while (num)
	{
		if (num & 1)
		{
			len++;
		}
		num = num >> 1;
	}
	return len;
}
