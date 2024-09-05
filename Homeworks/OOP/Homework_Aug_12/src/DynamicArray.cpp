#include "../include/DynamicArray.h"


DynamicArray::DynamicArray() : size (0), capacity (5), arr (nullptr){
	arr = new int[capacity];
}

DynamicArray::DynamicArray (int capacityValue) : size (0), capacity (capacityValue), arr (nullptr){
	arr = new int[capacity];
}

DynamicArray::DynamicArray (const DynamicArray& obj) : size (obj.getSize()), capacity (obj.getCapacity()), arr (nullptr){
	arr = new int [capacity];
	for (int i = 0; i < size; ++i){
		arr[i] = obj.arr[i];
	}
	
}

DynamicArray::~DynamicArray(){
	delete[] arr;
	arr = nullptr;
}

void	DynamicArray::setArr (int* arrValue){
	arr = arrValue;
}

void	DynamicArray::setSize (int sizeValue){
	if (sizeValue < 0)
		return;
	size = sizeValue;
}

void	DynamicArray::setCapacity (int capacityValue){
	if (capacityValue < 0)
		return;
	capacity = capacityValue;
}

int	DynamicArray::getSize() const{
	return size;
}

int	DynamicArray::getCapacity() const{
	return capacity;
}

int*	DynamicArray::getArr () const{
	return arr;
}

void	DynamicArray::push (int value){
	if (size == capacity)
	{
		capacity *= 2;
		int *tmp = new int[capacity];
		
		for (int i {0}; i < size; ++i)
			tmp[i] = arr[i];

		delete [] arr;
		arr = tmp;
		tmp = nullptr;
	}
	arr[size] = value;
	++size;
}

void	DynamicArray::displayInfo(){
	std::cout << "Size: " << size << std::endl;
	std::cout << "Capacity: " << capacity << std::endl;
	std::cout << "Array: ";
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

void	inputInt (int& num, const char *str){
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
