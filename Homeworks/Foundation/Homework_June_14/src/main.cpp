#include "utils.hpp"



bool IsInteger( num)
{
	return num == static_cast<int>(num);
}

int main()
{
	int num;
	std::cout << "------------------- Task 1 -------------------"<< std::endl;
	while(true)
	{
		std::cout << "Enter a number and get its square: ";
		std::cin >> num;
		if(!std::cin)
		{
			std::cout << "It's not a number, try again" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000,'\n');
		}
	
		else
			break;
		if (!IsInteger(num))
		{
			std::cout << "Number must be only integer" << std::endl;
		}
		std::cin.clear();
	}
	
	PrintSquare(num);
	return 0;
}
