#include "../include/Car.h"

int main()
{
	Car car1;
	car1.setYear(2019);
	car1.setMileage(265.4);
	car1.setMake("BMW Group");
	car1.setModel("BMW iX M60");
	std::cout << "Get model: " << car1.getModel() << std::endl;
	std::cout << "Get year: " << car1.getYear() << std::endl;
	std::cout << "Get mileage: " << car1.getMileage() << std::endl;
	std::cout << "Get make: " << car1.getMake() << std::endl;
	car1.displayInfo();
	for (int i = 10; i < 100; i += 20)
	{
		std::cout << "Mileage: " << car1.getMileage() << std::endl;
		car1.drive(i);
	}
	car1.displayInfo();
	car1.service();
	std::cout << "After service()!" << std::endl;
	car1.displayInfo();
	return 0;
}
