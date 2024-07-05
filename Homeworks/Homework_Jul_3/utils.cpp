#include "utils.hpp"


void Task1()
{
	const int	size = 41;
	char		str[size] = {};
	char		*ptr = str;

	std::cout << "Enter a line: ";
	std::cin.getline(str, size);
	while(*ptr)
		std::cout << *(ptr++) << " ";
	std::cout << std::endl;
}

void Task2()
{
	int		len = 0;
	const int	size = 41;
	
	char		str[size] = {};
	char		*ptr = str;

	std::cout << "Enter a line: ";
	std::cin.getline(str, size);

	while(*ptr)
	{
		len++;
		ptr++;
	}
	std::cout << "Length: " << len << std::endl;

}

void Task3()
{
	const int	size = 41;

	char		c;
	char		str[size] = {};
	char		*ptr = str;

	bool	flag = false;
	std::cout << "Enter a line: ";
	std::cin.getline(str, size);
	std::cout << "Enter an character: ";
	//std::cin.get(c);
	//std::cin.getline(c, 2);
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
	const int	size = 41;

	char		str[size] = {};
	char		*ptr = str;
	std::cout << "Enter a line with a special symbols: ";
	std::cin.getline(str, size);
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
	int		counter = 0;
	const int	size = 41;
	char		c;
	char		str[size] = {};
	char		*ptr = str;

	std::cout << "Enter a line: ";
	std::cin.getline(str, size);
	std::cout << "Enter character: ";
	std::cin.get(c);
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
	int		i = 0;
	const int	size = 41;
	char		str[size] = {};
	char		*ptr = str;

	std::cout << "Enter a line: ";
	std::cin.getline(str, size);
	while(*ptr)
	{
		if (i % 2 == 0)
			std::cout << *ptr << " ";
		i++;
		ptr++;
	}
	
	std::cout << std::endl;
}

void Task7()
{
	const int	size = 41;
	char		line1[size] = {};
	char		line2[size] = {};
	char		*ptr_line1 = line1;
	char		*ptr_line2 = line2;
	std::cout << "Enter a first line: ";
	std::cin.getline(line1, size);
	std::cout << "Enter a second line: ";	
	std::cin.getline(line2, size);
	
	std::cout << line1 << std::endl;
	while(*ptr_line2)
		*(ptr_line1++) = *(ptr_line2++);
	*ptr_line1 = '\0';
	std::cout << line1 << std::endl; 
}

void Task8()
{
	int		words_count = 0;
	const int	size = 41;

	bool		flag = false;

	char		str[size] = {};
	char		*ptr = str;

	std::cout << "Enter a line: ";
	std::cin.getline(str, size);
	while(*ptr != '\0')
	{
		if (*ptr == ' ' || words_count == 0)
			flag = true;
		if (flag)
		{
			words_count++;
			flag = false;
		}
		ptr++; 
	}
	std::cout << "Words: " << words_count << std::endl;
}
