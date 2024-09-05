#include "../includes/Triangle.h"

Triangle::Triangle() : p1{0,0}, p2{0,0}, p3{0,0} { }

Triangle::Triangle (cv::Point bottom_left_crd, cv::Point top_crd, cv::Point bottom_right_crd)
{
	p1 = bottom_left_crd;
	p2 = top_crd;
	p3 = bottom_right_crd;
}


Triangle::Triangle (const Triangle& obj)
{
	p1 = obj.p1;
	p2 = obj.p2;
	p3 = obj.p3;
}

Triangle::Triangle(Triangle&& obj)
{
	p1 = std::move(obj.p1);
	p2 = std::move(obj.p2);
	p3 = std::move(obj.p3);
}

Triangle& Triangle::operator=(const Triangle& obj)
{
	if (this == &obj)
		return *this;
	p1 = obj.p1;
	p2 = obj.p2;
	p3 = obj.p3;
	return *this;
}

Triangle& Triangle::operator=(Triangle&& obj)
{
	if (this == &obj)
		return *this;
	p1 = std::move(obj.p1);
	p2 = std::move(obj.p2);
	p3 = std::move(obj.p3);
	return *this;
}

Triangle::~Triangle () { };

void Triangle::draw (cv::Mat& img) const
{
	cv::Scalar lineColor(218, 247, 166);
	int thickness = 2;
	cv::line(img, p1, p2,lineColor, thickness, cv::LINE_8);
	cv::line(img, p2, p3,lineColor, thickness, cv::LINE_8);
	cv::line(img, p3, p1,lineColor, thickness, cv::LINE_8);
}