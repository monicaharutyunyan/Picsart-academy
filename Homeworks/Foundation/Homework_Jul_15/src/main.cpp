#include "utils.h"

int main()
{
	const char *str = "Hello";
	int	num;
	std::cout << "--------------------- Task 1 --------------------" << std::endl;
	Input(num);
	std::cout << "Factorial: " << Fibonacci(num)  << std::endl;
	std::cout << std::endl;
	PrintArray(str);
	return 0;
}
