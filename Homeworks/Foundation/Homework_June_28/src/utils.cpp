#include "utils.h"

void	inputInt (int& num, const char *str)
{
	while(true)
	{
		std::cout << str;
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
}

void	inputIntArr(int *arr, const int size)
{
	if (size == 1){
		inputInt(arr[size - 1], "Enter the element: ");
		return;
	}
	inputIntArr(arr, size - 1);
	inputInt(arr[size - 1], "Enter the element: ");
}

void	printIntArr(int *arr, int size)
{
	if (size == 1){
		std::cout << *(arr + (size - 1)) << " ";
		return;
	}
	printIntArr(arr, size - 1);
	std::cout << *(arr + (size - 1)) << " ";
}

void	pointerArithmetic (int* arr, int size)
{
	int sum {0};
	arr = new int[size];
	inputIntArr(arr, size);

	std::cout << std::endl;

	for (int i {0}; i < size; ++i) {
		std::cout << *(arr + i) << " ";
		sum += *(arr + i);
	}

	std::cout << std::endl << std::endl;
	std::cout << "Sum: " << sum <<  std::endl;

	
	delete [] arr;
	arr = nullptr;	
}

void	constPointersAndReverse()
{
	int		num{4};
	int		change{6};
	int const*	ptr {&num};
	int *const	const_ptr {&num};
	std::cout << "Pointer: " << ptr << std::endl;
	std::cout << "Value: " << *ptr << std::endl;
	*const_ptr = change;
	
	std::cout << std::endl << std::endl;
	std::cout << "                 Constant pointer to int (int *const ptr) can change it's value,\n          but address is constant, so error will be occurred, if you change it's address!" << std::endl;
	//const_ptr = &change;
	ptr  = &change;
	std::cout  << std::endl << std::endl;
	std::cout << "          Pointer to constant int (int *const ptr) can change it's address, but not value!" << std::endl;
	//*ptr = change;
	std::cout  << std::endl << std::endl;


}

void	arrayAndPointerRelationship(int *arr, int size)
{
	arr = new int [size];
	for (int i {0}; i < size; ++i){
		inputInt(*(arr + i), "Enter elements: ");
	}
	std::cout << "Array initialization using pointer notation!" << std::endl;
	printIntArr(arr, size);
	std::cout << std::endl;
	std::cout << "Array initialization using standard way!" << std::endl;
	inputIntArr(arr, size);
	printIntArr(arr, size);
	std::cout << std::endl;
}

void	referenceVsPointers()
{
	int	num = 54;
	int	&ref = num;
	int	*ptr = &num;
	
	std::cout << "Number before modification using reference: " << ref << std:: endl;
	ref = 44;
	std::cout << "Number after modification using reference: " << ref << std::endl;
	std::cout << std::endl;
	std::cout << "Number before modification using pointer: " << *ptr << std::endl;
	*ptr = 5;
	std::cout << "Number after modification using pointer: " << *ptr << std::endl;
	

}








