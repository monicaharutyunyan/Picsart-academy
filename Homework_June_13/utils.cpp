#include "utils.hpp"

void hello_world()
{
	std::cout << "Hello World\n";
}

void just_int()
{
	int number;
	number = 42;
	std::cout << number << std::endl;
}

void single_number_io()
{
	int num;
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
	std::cout << num << std::endl;
}

void input_numbers_sum()
{
	int count=2;
	int num = 0;
	long int sum = 0;
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
	for(size_t i = 0; i < numbers.size(); i++)
		sum += numbers[i];
	std::cout << sum << std::endl;


}
