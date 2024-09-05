#include <iostream>


class	Matrix
{
	public:
		Matrix ();
		Matrix (size_t, size_t);
		Matrix (const Matrix&);
		Matrix (Matrix&&);
		Matrix& operator=(const Matrix&);
		Matrix& operator=(Matrix&&) noexcept;
		
		~Matrix();

		size_t	getRows() const;
		size_t	getCols() const;
		
		double	get(size_t row, size_t col) const;
		
		void		print() const;
		void		set(size_t row, size_t col, double value);
	private:
		size_t	rows_;
		size_t	cols_;
		double**	data_;
};
