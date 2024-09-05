#include <iostream>

/*Create a simple C++ class Car that represents a car object. The class should have the following attributes:
make (string)
model (string)
year (int)
mileage (double)
Requirements:
Define the class with private attributes and public getter and setter methods for each attribute.
Implement a method displayInfo() that prints the car’s information in a user-friendly format.
Write a main function to create a few instances of the Car class, set their attributes, and display their information.
Extend the Car class from Task 1 to include different types of constructors.
Requirements:
Implement a default constructor that initializes the car’s attributes to default values (e.g., empty strings for make and model, 0 for year and mileage).
Implement a parametrized constructor that takes arguments for make, model, year, and mileage and initializes the attributes accordingly.
Implement a copy constructor that creates a new Car object as a copy of an existing one.
Modify the main function to demonstrate the use of all three constructors.
Add behavior to the Car class to simulate the car’s functionality.
1. Implement a method drive(double distance) that increases the car’s mileage by the specified distance.
2. Implement a method service() that resets the car’s mileage to 0, simulating a complete service.
3. Modify the main function to demonstrate the car’s behavior by creating a car object, driving it for a certain distance, servicing it, and displaying the updated information.
*/

class Car{
	private:
		int		year;
		double		mileage;
		std::string	make;
		std::string	model;
	public:
		//Constructors
		Car ();
		Car (std::string makeValue, std::string modelValue, int yearValue, double mileageValue);
		Car (const Car& object);

		// Setter
		void	setYear (int yearValue);
		void	setMileage (double mileageValue);	
		void	setMake (std::string makeValue);
		void	setModel (std::string modelValue);
		
		//Getter
		int		getYear () const;
		double		getMileage () const;
		std::string	getMake () const;
		std::string	getModel () const;
		
		//Methods
		void	displayInfo ();
		void	drive (double distance);
		void	service();
};
