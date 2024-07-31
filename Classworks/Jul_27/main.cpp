#include <iostream>


int* initialize_dynamic_array(int size);
int* copy_dynamic_array(int* array, int size);
int* delete_element(int* array, int& size, int index);
int find_max_element(int* array, int size);
int* get_squares_array(int n);

char* reverse_dynamic_string(const char* str);

void reverse_dynamic_array(int* array, int size);


int main()
{
	const int len = 40;
	int n;
	int size;
	int *arr = nullptr;
	int *new_arr = nullptr;
	char str[len] = {};

	inputInt(size, "Enter the size: ");
	arr = initialize_dynamic_array(size);
	printIntArr(arr, size);			
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------------" << std::endl;

	inputInt(size, "Enter the size: ");
	arr = initialize_dynamic_array(size);
	new_arr = copy_dynamic_array(arr, size);
	printIntArr(new_arr, size);
	std::cout << std::endl;	
	std::cout << "------------------------------------------------------------------------------------" << std::endl;
	inputInt(n, "Index: ");

	arr = delete_element(arr, size, n);
	printIntArr(arr, size);
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------------" << std::endl;

	reverse_dynamic_array(arr, size);
	printIntArr(arr, size);
	std::cout << std::endl;
	
	std::cout << "------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Max: " << find_max_element(arr, size) << std::endl;
	std::cout << "------------------------------------------------------------------------------------" << std::endl;
	new_arr =  get_squares_array(size);
	printIntArr(new_arr, size);
	std::cout << std::endl;
	std::cout << "------------------------------------------------------------------------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.getline(str, size);
	
	str = reverse_dynamic_array(str);	
	std::cout << str << std::endl;	
	delete [] arr;
	arr = nullptr;
	delete [] new_arr;
	new_arr = nullptr;
	delete [] str;
	str = nullptr;

	system("leaks classwork");
	return 0;
}





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

void	printIntArr(int* arr, const int size)
{
	if (size == 1)
	{
		std::cout << arr[size - 1] << " ";
		return;
	}
	printIntArr(arr, size - 1);
	std::cout << arr[size - 1] << " ";
}

int* initialize_dynamic_array(int size)
{
	int *arr = new int[size];
	for (int i = 0; i < size; ++i)
		arr[i] = i + 1;
	return arr; 
}

int* copy_dynamic_array(int* array, int size)
{
	int *new_arr = new int [size];
	for (int i = 0; i < size; ++i)
		new_arr[i] = array[i];
	return new_arr;

}

int* delete_element(int* array, int& size, int index)
{
	int *res_arr = new int [size - 1];
	int j = 0;
	for (int i = 0; i < size; ++i)
	{
		if (i != index)
		{
			res_arr[j] = array[i];
			++j;
		}
	}
	--size;
	return res_arr;
}


void reverse_dynamic_array(int* array, int size)
{
	int tmp;
	for (int i = 0; i < size / 2; ++i)
	{
		tmp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = tmp;
	}
}

int find_max_element(int* array, int size)
{
	if (!array)
		return -1;
	
	int max = array[0];
	for (int i = 0; i < size; ++i)
		if (array[i] > max)
			max = array[i];
	return max;
}

int* get_squares_array(int n)
{
	int *new_arr = new int[n];
	for (int i = 0; i < n; ++i)
		new_arr[i] = (i + 1) * (i + 1);
	return new_arr;
}

int my_strlen(const char *str)
{
	int	len = 0;
	while (*str++)
		len++;
	return len;
}


char* reverse_dynamic_string(const char* str)
{
	int size = my_strlen(str);
	int *new_str = new char[size];
	
	for (int i = 0; i < size; ++i)
		new_str[i] = str[size - 1 - i];
	new_str[i] = '\0';
	return new_str;
}


