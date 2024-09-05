#include "utils.h"

int main()
{

	const int	size = 40;

	char		c;
	char		str[size] = {};
	char		str1[size] = {};
	std::cout << "--------------------- Task 1 --------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.getline(str, size);
	std::cout << "Length: " << my_strlen(str) << std::endl;	
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	
	std::cout << std::endl;
	std::cout << "--------------------- Task 2 --------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.getline(str, size);
//	std::cin.clear();
//	std::cin.ignore(10000, '\n');
	std::cout << "Enter the character: ";
	std::cin.get(c);
	if (my_strchr(str, c))
		std::cout << "Strchr: " << my_strchr(str, c) << std::endl;
	else
		std::cout << "There is no character like that." << std::endl;
	std::cin.clear();
	std::cin.ignore(10000, '\n');

	std::cout << std::endl;
	std::cout << "--------------------- Task 3 --------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.getline(str, size);
	//std::cin.clear();
	//std::cin.ignore(10000, '\n');
	std::cout << "Enter the line: ";
	std::cin.getline(str1, size);	
	std::cout << "StrCat: " << my_strcat(str, str1) << std::endl;
	std::cin.clear();
	std::cin.ignore(10000, '\n');
	std::cout << std::endl;

	std::cout << "--------------------- Task 4 --------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.getline(str, size);
	std::cout << "Enter the line: ";
	std::cin.getline(str1, size);		
	std::cout << "StrCpy: " << my_strcpy(str, str1) << std::endl;
	std::cout << std::endl;


	std::cout << "--------------------- Task 5 --------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.getline(str, size);
	std::cout << "Enter the line: ";
	std::cin.getline(str1, size);
	if (my_strstr(str, str1))
		std::cout << "StrStr: " << my_strstr(str, str1) << std::endl;
	else
		std::cout << "There is no substring." << std::endl;

}
