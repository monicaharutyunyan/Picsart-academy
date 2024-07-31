#include "utils.h"


int main()
{
	int	size;
	int	*arr = nullptr;
	std::cout << "---------------------------------- Task 1 ---------------------------------- " << std::endl;
	inputInt(size, "Enter the size: ");
	pointerArithmetic(arr, size);
	std::cout << "--------------------------------- Task 2 --------------------------------- " << std::endl;
	constPointersAndReverse();
	std::cout << "--------------------------------- Task 3 --------------------------------- " << std::endl;
	inputInt(size, "Enter the size: ");
	arrayAndPointerRelationship(arr, size);
	std::cout << "--------------------------------- Task 4 --------------------------------- " << std::endl;
	referenceVsPointers();
	return 0;
}
