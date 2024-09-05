#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
class Circle : public Shape
{
	public:
		Circle();
		Circle(int, int, int);
		Circle(const Circle&);
		Circle(Circle&&);
		Circle& operator=(const Circle&);
		Circle& operator=(Circle&&);
		~Circle() override;

		void draw (cv::Mat&) const override;

	private:
	int	radius;
	int	x_center;
	int	y_center;
};

#endif
