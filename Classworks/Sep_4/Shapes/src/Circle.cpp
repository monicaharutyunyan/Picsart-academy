#include "../includes/Circle.h"


Circle::Circle () : radius {0}, x_center {0}, y_center {0}{};

Circle::Circle (int r, int x, int y) : radius {r}, x_center {x}, y_center {y} { };

Circle::Circle (const Circle& obj)
{
	radius = obj.radius;
	x_center = obj.x_center;
	y_center = obj.y_center;
}

Circle::Circle (Circle&& obj)
{
		radius = obj.radius;
		x_center = obj.x_center;
		y_center = obj.y_center;
		obj.radius = 0;
		obj.x_center = 0;
		obj.y_center = 0;
}

Circle& Circle::operator= (const Circle& obj)
{
		if (this == &obj)
			return *this;
		radius = obj.radius;
		x_center = obj.x_center;
		y_center = obj.y_center;
		return *this;
}
Circle& Circle::operator= (Circle&& obj)
{
		radius = obj.radius;
		x_center = obj.x_center;
		y_center = obj.y_center;
		obj.radius = 0;
		obj.x_center = 0;
		obj.y_center = 0;
		return *this;
}

Circle::~Circle () { };

void Circle::draw (cv::Mat& img) const
{
	cv::Scalar line_Color(144, 12, 63);
	cv::Point crd (x_center, y_center);
	cv::circle(img, crd, radius, line_Color, 1);	
}



