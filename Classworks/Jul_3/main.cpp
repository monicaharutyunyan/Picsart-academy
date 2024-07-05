#include <iostream>


int main()
{
//	int len = 0;
	int flag = 0;
	char c;
	char str[40] = {};
	char *ptr = str;
	std::cout << "Enter the line: ";
	std::cin >> str;
	
	std::cout << "Enter character: ";
	std::cin >> c;
	//while (str[len] != '\0')
	//	len++;
	//std::cout << len << std::endl;
	//len = 0;
	while (*ptr)
	{
	//	len++;
		if (*ptr == c)
		{
			std::cout << *ptr;
			flag = 1;
			break;
		}
		ptr++;
	}
	if (!flag)
		std::cout << "Not found" << std::endl;
	std::cout << std::endl;
	//std::cout << len << std::endl;


	std::cout << "-------------------------------------------------------" << std::endl;
	char line1[40] = {}; 
	char line2[40] = {};
	char *ptr_full_line = line1;
	char *ptr_line1 = line1;
	char *ptr_line2 = line2;

	std::cout << "Enter first line: ";
	std::cin >> line1;
	std::cout << "Enter second line: ";
	std::cin >> line2;
	while (*ptr_line1)
		++ptr_line1;
	ptr_line1 = ptr_line2;
	std::cout << ptr_full_line << std::endl;
	 

}
