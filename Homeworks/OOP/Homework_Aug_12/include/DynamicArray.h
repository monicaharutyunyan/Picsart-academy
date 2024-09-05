#include <iostream>

/*
Default constructor
Parametrized Constructor(with capacity)
Push function with resize
Destructor 
*/

class	DynamicArray
{
	private:
		int	size;
		int	capacity;
		int	*arr;
	public:
		DynamicArray();
		~DynamicArray();
		
		DynamicArray(int);
		DynamicArray(const DynamicArray&);
		
		void	setArr(int*);
		void	setSize(int);
		void	setCapacity(int);

		int	getSize () const;
		int	getCapacity () const;
		int*	getArr () const;

		void	push(int);
		void	displayInfo();

	
};

void	inputInt (int& num, const char *str);

