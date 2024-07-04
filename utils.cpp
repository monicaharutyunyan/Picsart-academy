#include "utils.hpp"


void Task1()
{
	char	str[40] = {};
	char	*ptr = str;

	std::cout << "Enter a line: ";
	std::cin >> str;
	while(*ptr)
		std::cout << *(ptr++) << " ";
	std::cout << std::endl;
}

void Task2()
{
	int	len = 0;

	char	str[40] = {};
	char	*ptr = str;

	std::cout << "Enter a line: ";
	std::cin >> str;
	while(*ptr)
	{
		len++;
		ptr++;
	}
	std::cout << "Length: " << len << std::endl;

}

void Task3()
{
	char	c;
	char	str[40] = {};
	char	*ptr = str;

	bool	flag = false;
	std::cout << "Enter a line: ";
	std::cin >> str;
	std::cout << "Enter an character: ";
	std::cin >> c;
	while(*ptr)
	{
		if (*ptr == c)
			flag = true;
		if (flag)
		{
			std::cout << ptr;
			break;	
		}
		ptr++;
	}
	std::cout << std::endl;

}


void Task4()
{
	char str[40] = {};
	char *ptr = str;
	std::cout << "Enter a line with special symbols: ";
	std::cin >> str;
	while(*ptr)
	{
		if ((*ptr < 48) || (*ptr > 57 && *ptr < 65) || (*ptr > 90 && *ptr < 97) || (*ptr > 122))
			std::cout << *ptr;
		ptr++;
	}
	std::cout << std::endl;
}

void Task5()
{
	int	counter = 0;

	char	c;
	char	str[40] = {};
	char	*ptr = str;

	std::cout << "Enter a line: ";
	std::cin >> str;
	std::cout << "Enter character: ";
	std::cin >> c;
	while (*ptr)
		if (*ptr++ == c)
			counter++;
	if (counter)
		std::cout << "There is a " << counter << " " << c << " character." << std::endl;
	else
		std::cout << "There is no " << c << " character in this line!" << std::endl;
}

void Task6()
{	
	int	i = 0;

	char	str[40] = {};
	char	*ptr = str;

	std::cout << "Enter a line: ";
	std::cin >> str;
	while(*ptr)
	{
		if (i % 2 == 0)
			std::cout << *ptr << " ";
		i++;
		ptr++;
	}
	
	std::cout << std::endl;
}
