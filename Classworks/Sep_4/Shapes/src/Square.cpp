#include "../includes/Square.h"

	
Square::Square () : top_left_crd {0,0}, bottom_right_crd {0,0} { };

Square::Square (cv::Point first_pair, cv::Point second_pair) :
	top_left_crd {first_pair}, bottom_right_crd {second_pair} { };

Square::Square (const Square& obj)
{
	if ((obj.bottom_right_crd.x < 0) || (obj.top_left_crd.x < 0)
			|| (obj.bottom_right_crd.y < 0) || (obj.top_left_crd.y < 0))
		exit(2);	
	top_left_crd = obj.top_left_crd;
	bottom_right_crd = obj.bottom_right_crd;
}

Square::Square (Square&& obj)
{
	top_left_crd = std::move(obj.top_left_crd);
	bottom_right_crd = std::move(obj.bottom_right_crd);
}

Square& Square::operator= (const Square& obj)
{
	if (this == &obj)
		return *this;
	top_left_crd = obj.top_left_crd;
	bottom_right_crd = obj.bottom_right_crd;
	return *this;
}
		
Square& Square::operator= (Square&& obj)
{
	top_left_crd = std::move(obj.top_left_crd);
	bottom_right_crd = std::move(obj.bottom_right_crd);
	return *this;
}

Square::~Square() { };


void Square::draw (cv::Mat& img) const
{
	cv::Scalar lineColor(255, 195, 0);
	int thickness = 2;
	rectangle(img, top_left_crd, bottom_right_crd, lineColor, thickness, cv::LINE_8);
}



