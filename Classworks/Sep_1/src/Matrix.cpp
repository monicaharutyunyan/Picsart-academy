#include "../includes/Matrix.h"


Matrix::Matrix() : rows_ {0}, cols_{0}, data_ {nullptr} {
	std::cout << "Default constructor!" << std::endl;
};

Matrix::Matrix(size_t rows, size_t cols) : rows_ {rows}, cols_ {cols}
{
	if (rows_ > 0)
	{
		data_ = new double* [rows_];
		if (cols_ > 0)
		{
			for (size_t i {0}; i < rows_; ++i)
			{
				data_[i] = new double [cols_];
			}
		}
		else
			std::cout << "Cols less than 0!\n Was created primitive array" << std::endl;
	}
	else
		std::cout << "Row is less than 0!\n Nothing was created" << std::endl;
	std::cout << "Parameterized constructor!" << std::endl;
}

// Copy ctor
Matrix::Matrix (const Matrix& other)
{
	rows_ = other.rows_;
	cols_ = other.cols_;
	data_ = new double* [rows_];
	for (size_t i {0}; i < rows_; ++i)
	{
		data_[i] = new double [cols_];
	}
	for (size_t i{0}; i < rows_; ++i)
	{
		for (size_t j {0}; j < cols_; ++j)
		{
			data_[i][j] = other.data_[i][j];
		}
	}
	std::cout << "Copy Constructor!" << std::endl;
}

// Move ctor
Matrix::Matrix (Matrix&& obj)
{
	rows_ = obj.rows_;
	cols_ = obj.cols_;
	data_ = obj.data_;
	obj.rows_ = 0;
	obj.cols_ = 0;
	obj.data_ = nullptr;
	std::cout << "Move ctor" << std::endl;
}

Matrix& Matrix::operator=(const Matrix& other)
{
	if (this == &other)
		return *this;
	rows_ = other.rows_;
	cols_ = other.cols_;
	for (size_t i {0}; i < rows_; ++i)
	{
		delete [] data_[i];
		data_[i] = nullptr;
	}
	delete [] data_;

	data_ = new double* [rows_];
	for (size_t i {0}; i < rows_; ++i)
	{
		data_[i] = new double [cols_];
	}
	for (size_t i{0}; i < rows_; ++i)
	{
		for (size_t j {0}; j < cols_; ++j)
		{
			data_[i][j] = other.data_[i][j];
		}
	}
	return *this;
	std::cout << "Copy assignment operator!" << std::endl;
}


Matrix& Matrix::operator=(Matrix&& obj) noexcept
{
	rows_ = obj.rows_;
	cols_ = obj.cols_;
	for (size_t i {0}; i < rows_; ++i)
	{
		delete [] data_[i];
		data_[i] = nullptr;
	}
	delete [] data_;

	data_ = obj.data_;
	obj.rows_ = 0;
	obj.cols_ = 0;
	obj.data_ = nullptr;
	return *this;
	std::cout << "Move assignment operator!" << std::endl;

}

size_t	Matrix::getRows() const
{
	return rows_;
}
size_t	Matrix::getCols() const
{
	return cols_;
}

double	Matrix::get(size_t row, size_t col) const
{
	if ((row < rows_) && (col < cols_))
		return data_[row][col];
	return 0;
}

void	Matrix::print() const
{
	if (data_ == nullptr)
		return;
	for (size_t i{0}; i < rows_; ++i)
	{
		for (size_t j {0}; j < cols_; ++j)
		{
			std::cout << data_[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void	Matrix::set(size_t row, size_t col, double value)
{
	if ((row < rows_) && (col < cols_))
		data_[row][col] = value;
}
	
Matrix::~Matrix()
{
	for (size_t i {0}; i < rows_; ++i)
	{
		delete [] data_[i];
		data_[i] = nullptr;
	}
	delete [] data_;
	data_ = nullptr;
}
