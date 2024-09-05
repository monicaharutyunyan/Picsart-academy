#include "../include/DynamicArray.h"

int main()
{
	char		y_or_n;
	int		element;
	DynamicArray	arr;

	element = 0;
	std::cout << "\n\n                    Hello, we have a implementation of Dynamic Array,\n                         please check and give a feedback)\n" << std::endl;
	
	while (true)
	{
		std::cout << "Do you want to add another element? (y/n)  ";
		std::cin.get(y_or_n);
		if (y_or_n == 'n' || y_or_n =='y')
		{
			if (y_or_n == 'n')
				break;
			inputInt(element, "Enter the element: ");
			arr.push(element);
		}
		std::cin.clear();
		std::cin.ignore(10000, '\n');

	}
	std::cout << "--------------------------------------------------------------------" << std::endl;
	std::cout << "                    Information about array.                     "<< std:: endl;
	std::cout << "--------------------------------------------------------------------" << std::endl;
	arr.displayInfo();
	return 0;
}
