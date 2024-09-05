#include "utils.hpp"

int main()
{
	int		num;
	int		num2;
	const int	size = 40;

	char		str[size] = {}; 
	char		str1[size] = {}; 
	std::cout << "--------------------- Task 1 --------------------" << std::endl;
	Input(num);
	if (IsPrime(num))
		std::cout << "The number is prime" << std::endl;
	else
		std::cout << "The number is not prime" << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------- Task 2 --------------------" << std::endl;	
	Input(num);
	if (PrimeAdditives(num))
		std::cout << "This number has a two prime additives" << std::endl;
	else
		std::cout << "This  number doesn't have any prime additives" << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------- Task 3 --------------------" << std::endl;
	Input(num);
	std::cout << "The " << num << " has a " << DigitCount(num) << " digits" << std::endl; 
	std::cout << std::endl;
	std::cout << "--------------------- Task 4 --------------------" << std::endl;
	Input(num);
	Input(num2);
	std::cout << "Power: " << Power(num, num2) << std:: endl;
	std::cout << std::endl;
	std::cout << "--------------------- Task 5 --------------------" << std::endl;
	Input(num);
	std::cout << "The largest digit is: " << LargestDigitInNumber(num) << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------- Task 6 --------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	//std::cin.getline(str, size);
	std::cin.get(str, size);
	Print(str, my_strlen(str));
	std::cout << std::endl;
	std::cout << "--------------------- Task 7 --------------------" << std::endl;
	std::cout << "Enter the line: ";
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	//std::cin.getline(str1, size);
	std::cin.get(str, size);
	ReversePrint(str1, my_strlen(str1));
	std::cout << "--------------------- Task 8 --------------------" << std::endl;
	Input(num);
	std::cout << num << "th number in Fibonacci sequence is: " << Fibonacci(num) << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------- Task 9 --------------------" << std::endl;
	Input(num);
	std::cout << "Addition of digits: " << SumOfDigits(num) << std::endl;
	std::cout << std::endl;

	return 0;
}
