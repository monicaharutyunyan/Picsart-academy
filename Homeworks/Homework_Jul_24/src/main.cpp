#include "utils.h"


int main()
{
	int	size;
	int		*arr = nullptr;
	int		*new_arr = nullptr;


	std::cout << "-------------------------------- Task 1 --------------------------------" << std::endl;
	inputInt(size, "Enter the size: ");
	arr = get_dynamic_array(size);
	printIntArr(arr, size); 
	
	delete [] new_arr;
	new_arr = nullptr;
	delete [] arr;
	arr = nullptr;
	return 0;
}
