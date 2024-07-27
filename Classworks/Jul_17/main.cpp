#include <iostream>

int len(char *str);
void	binary(int num);
int	MaxOfArr(int arr[], int size);

int main()
{
	int n;
//	const int size = 40;
//	char str[size] = {};
	std::cout << "Enter the number: ";
	std::cin >> n;
	/*std::cout << "Factorial: " << Factorial(n) << std::endl;
	std::cout << "Enter the number: ";
	std::cin >> n;
	std::cout << "Fibonacci: " << Fibonacci(n) << std::endl;
	std::cout << "Enter the number: ";
	std::cin >> n;
	PrintIntegers(n);
	std::cout << std::endl;
	std::cout << "Enter the number: ";
	std::cin >> n;
	std::cout << SumOfDigits(n) << std::endl;
	

	
	std::cout << "Enter line: ";
	std::cin.getline(str, size);
//	char *str = "hello";
	std::cout << len(str) << std::endl;
	*/
	binary(n);
	return 0;
}

int	MaxOfArr(int arr[], int size)
{
	if (size == 0)
		return 0;
	if (arr[size - 1] < arr[size - 2])
		return 
}

void	binary (int num)
{
	if (num == 0)
		return;
	binary(num / 2);
	std::cout << num % 2 ;
}



int	Factorial(int num)
{
	static int	arr[20] = {1};
	if (num <= 1)
		return arr[0];
	if (arr[num] != 0)
		return arr[num];
	arr[num] = num * Factorial(num - 1);
	return arr[num];
}

int Fibonacci (int num)
{
	static int	arr[20] = {0,1,1};
	if (num <= 2)
		return arr[1];
	if (arr[num] != 0)
		return arr[num];
	arr[num] = Fibonacci(num -1) + Fibonacci(num - 2);
	return arr[num];
}

void	PrintIntegers(int n)
{
	if (n < 0)
		return ;
	PrintIntegers(n - 1);	
	std::cout << n  << " ";

}

int	SumOfDigits(int num)
{
	if (num == 0)
		return 0;
	return num % 10 + SumOfDigits(num / 10);
}

int 	len(char *str)
{
	if (*str == '\0')
		return 0;
	return 1 + len(str + 1);
}


