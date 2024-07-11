#include <iostream>

int	sum (int& a, int& b);
int	max (int& num1, int& num2);
int	factorial (int& number);
int	my_strlen(char *str);
char 	*reverse_string(char *str);

void	print (int* arr, const int size);


int main()
{	
	//const int	size = 6;	
	const int	size_str = 40;

	//int		num1;
	//int		num2;
	//int		arr[] = {1, 2, 3, 4, 5, 6};
	
	//char		str[size_str] = {};
	char		str1[size_str] = {};
	/*
	while(true)
	{
		std::cout << "Enter the first number: ";
		std::cin >> num1;
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
	while(true)
	{
		std::cout << "Enter the second number: ";
		std::cin >> num2;
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

	
	// Task 1 - Print Array Elements
	print(arr, size);
	
	//Task 2 - Calculate the Sum of Two Numbers
	std::cout << "Sum of "<< num1 << " and " << num2 << " is: "<<  sum(num1, num2) << std::endl;
	
	//Task 3: Find the Maximum of Two Numbers
	std::cout << "Maximum value from " << num1 << " and " << num2 << " is: " << max(num1, num2) << std::endl;
	
	// Task 4: Calculate Factorial of a Number
	std::cout << "Factorial: " << factorial(num1) << std::endl;

	// Task 5: Find the Length of a String
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cout << "Enter a line: ";
	std::cin.getline(str, size_str);
	std::cout << "Length: " << my_strlen(str) << std::endl;
	*/
	// Task 6: Reverse a String
	//std::cin.clear();
	//std::cin.ignore(10000, '\n');
	std::cout << "Enter a line: ";
	std::cin.getline(str1, size_str);
	reverse_string(str1);
	std::cout << "Reverse: " << str1 << std::endl;
	return 0;
}



void print (int* arr, const int size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int sum (int& a, int& b)
{
	return a + b;
}

int max (int& num1, int& num2)
{
	if (num1 > num2)
		return num1;
	return num2;
}

int factorial (int& number)
{
	int factorial = 1;
	for (int i = 1; i <= number; i++)
		factorial *= i;
	return factorial;
}

int my_strlen(char *str)
{
	int len = 0;
	char *ptr = str;
	while (*ptr)
	{
		len++;
		ptr++;
	}
	return len;
}



char 	*reverse_string(char *str)
{
	char	tmp;
	char	*ptr = str;
	
	int	i = 0;
	int	size = my_strlen(ptr);
	while (i < size)
	{	
		tmp = *(ptr + i);
		*(ptr + i) = *(ptr + size);
		*(ptr + size) = tmp;
		i++;
		size--;
	}
	return ptr;
}


