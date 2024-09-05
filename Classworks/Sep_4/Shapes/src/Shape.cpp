#include "../includes/Shape.h"

Shape::Shape(){};
Shape::~Shape(){};
void Shape::draw(cv::Mat& img) const
{
//	(void*) img;
	std::cout << "This is a Shape's draw function" << std::endl;
}
