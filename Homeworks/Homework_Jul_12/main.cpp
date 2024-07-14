#include "utils.hpp"



int main()
{
	const int	size = 40;
	
	char		c;
	char		str1[size] = {};
	char		str2[size] = {};
	
	std::cout << "--------------------- Task 1 --------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.getline(str1, size);
	std::cout << "Enter the line: ";
	std::cin.getline(str2, size);
	if (my_strcmp(str1, str2) == -1)
		std::cout << "First line is less than second one." << std::endl;
	else if (my_strcmp(str1, str2) == 0)
		std::cout << "Lines are equal." << std::endl;
	else
		std::cout << "First line is greater than second line." << std::endl;
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cout << std::endl;

	std::cout << "--------------------- Task 2 --------------------" << std::endl;
	std::cout << "Enter the character: ";
	std::cin.get(c);
	if (my_toupper(c))
		std::cout << my_toupper(c) << std::endl;
	else
		std::cout << "The character is not a lowercase letter." << std::endl;
	std::cin.clear();
	std::cin.ignore(10000, '\n');

	std::cout << std::endl;

	std::cout << "--------------------- Task 3 --------------------" << std::endl;
	std::cout << "Enter the character: ";
	std::cin.get(c);
	if (my_isalnum(c))
		std::cout << "The character is alphanumeric." << std::endl;
	else
		std::cout << "The character is not alphanumeric." << std::endl;
	std::cin.clear();
	std::cin.ignore(10000, '\n');

	std::cout << std::endl;

	std::cout << "--------------------- Task 4 --------------------" << std::endl;
	std::cout << "Enter the character: ";
	std::cin.get(c);
	if (my_isspace(c))
		std::cout << "The character is a white-space character "<< std::endl;
	else
		std::cout << "The character is not a white-space character." << std::endl;
	std::cout << std::endl;





}


