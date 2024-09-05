#include "utils.hpp"

void InputData(int &count)
{
	int num = 0;
	std::vector <int> numbers;
	while(true)
	{
		std::cout << "Enter count of numbers (default 2): ";
		std::cin >> count;
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
	while(count > 0)
	{
		while(true)
		{
			std::cout << "Enter a number (entered " << count << "): ";
			std::cin >> num;
			if(!std::cin)
		{
			std::cout << "It's not a number, try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000,'\n');
		}
			
			else
				break;	
			
		}
		numbers.push_back(num);
		count--;
	}
}

void Task1 ()
{
	int	a;
	int	b;
	int	num;
	int	add;
	int	mult;
	int	division = 0;
	int	count = 2;
	int	*ptr_a = &a;
	int	*ptr_b = &b;
	
	
	while(count > 0)
	{
		while(true)
		{
			std::cout << "Enter a number (entered " << count << "): ";
			std::cin >> num;
			if(!std::cin)
			{
				std::cout << "It's not a number, try again" << std::endl;
				std::cin.clear();
				std::cin.ignore(10000,'\n');
			}
			else
				break;
		}		
		
		if (count == 2)
			a = num;
		else if (count == 1)
			b = num;

		count--;
	}

	add = *ptr_a + *ptr_b;
	mult = *ptr_a * *ptr_b; 
	if (*ptr_b == 0)
		division =  *ptr_b / *ptr_a;
	else if ((*ptr_a == 0) && (*ptr_b == 0))
		std::cout << "Numbers are equal to 0, division can not be done!" << std::endl;
	else 
		division = *ptr_a / *ptr_b;

	
	std::cout << "Addition: " << add << std::endl;
	std::cout << "Multiplication: " << mult << std::endl;
	std::cout << "Division: " << division << std::endl;
}



void Task2()
{
	char c = 'p';
	char *ptr = &c;
	std::cout << "Address (char): " << (void *)ptr << std::endl;
	std::cout << "Value (char): " << *ptr << std::endl;
}

void Task3()
{
	char c = 'a';
	const char *ptr = &c;
	std::cout << "Address (char): " << (void *)ptr << std::endl;
	std::cout << "Value (char): " << *ptr << std::endl;

	std::cout << "Used the 'const char *ptr' form for storing the address of a variable!" << std::endl;
}

void Task4()
{
	// the task was unclear
}

void Task5()
{
	double d = 2.3;
	//double a = 3.4;
	double *const ptr = &d;
	//ptr = &a;
	std::cout << "Address (char): " << (void *)ptr << std::endl;
	std::cout << "Value (char): " << *ptr << std::endl;

	std::cout << "Used the 'char *const ptr' form for storing the address of a variable!" << std::endl;

}


void Task6()
{
	int	i = 0;
	int	count = 0;
	float	num;
	float	min;

	while(true)
	{
		std::cout << "Enter length of array: ";
		std::cin >> count;
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

	float	arr[count];
	float	*ptr = arr;

	while(i < count)
	{
		while(true)
		{
			std::cout << "Enter a number (entered " << i << "): ";
			std::cin >> num;
			if(!std::cin)
			{
				std::cout << "It's not a number, try again" << std::endl;
				std::cin.clear();
				std::cin.ignore(10000,'\n');
			}

			else
				break;

		}
		*(ptr + i) = num; 
		i++;
	}
	min = *ptr;
	for (int i = 0; i < count; i++)
		if (*(ptr + i) < min)
			min = *(ptr + i);
	std::cout << "Min: " << min << std::endl;

}

void Task7()
{
	int	i = 0;
	int	count = 0;
	float	num;
	float	max;

	while(true)
	{
		std::cout << "Enter length of array: ";
		std::cin >> count;
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

	float	arr[count];
	float	*ptr = arr;

	while(i < count)
	{
		while(true)
		{
			std::cout << "Enter a number (entered " << i << "): ";
			std::cin >> num;
			if(!std::cin)
			{
				std::cout << "It's not a number, try again" << std::endl;
				std::cin.clear();
				std::cin.ignore(10000,'\n');
			}

			else
				break;

		}
		*(ptr + i) = num; 
		i++;
	}
	max = *ptr;
	for (int i = 0; i < count; i++)
		if (*(ptr + i) > max)
			max = *(ptr + i);
	std::cout << "Max: " << max << std::endl;

}



