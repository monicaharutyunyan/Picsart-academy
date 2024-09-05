#include "../include/Car.h"

Car:: Car()
{
	year = 0;
	mileage = 0;
	make = "";
	model = "";
}

Car::Car (std::string makeValue, std::string modelValue, int yearValue, double mileageValue)
{
	make = makeValue;
	model = modelValue;
	year = yearValue;
	mileage = mileageValue;
}

Car::Car (const Car& object)
{
	model = object.model;
	make = object.make;
	year = object.year;
	mileage = object.mileage;
}


void	Car::setYear (int yearValue)
{
	if (yearValue < 0)
		return;
	year = yearValue;
}

void	Car::setMileage (double mileageValue)
{
	if (mileageValue < 0)
		return;
	mileage = mileageValue;
}
void	Car::setMake (std::string makeValue)
{
	if (makeValue.empty())
		return;
	make = makeValue;
}

void	Car::setModel (std::string modelValue)
{
	if (modelValue.empty())
		return;
	model = modelValue;
}

int	Car::getYear() const
{
	return year;
}

double	Car::getMileage () const
{
	return mileage;
}

std::string	Car::getMake() const
{
	return make;
}

std::string	Car::getModel() const
{
	return model;
}

void	Car::displayInfo()
{
	std::cout << "\n\nThis is all information about car\n";
	std::cout << "---------------------------------------\n";
	std::cout << "Car's model is: " << model << std::endl;
	std::cout << "Car's mileage is about: " << mileage << std::endl;
	std::cout << "Car was made in: " << year << std::endl;
	std::cout << "Car company is: " << make << std::endl;
	std::cout << std::endl;
}

void	Car::drive (double distance)
{
	if (distance < 0)
	{
		std::cout << "You can only increase the speed!" << std::endl; 
		return;
	}
	mileage += distance;
}

void	Car::service()
{
	mileage = 0;
}





