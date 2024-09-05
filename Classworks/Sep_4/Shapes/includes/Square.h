#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

#include "Shape.h"
class Square : public Shape
{
	public:
		Square();
		Square(cv::Point, cv::Point);
		Square(const Square&);
		Square(Square&&);
		Square& operator=(const Square&);
		Square& operator=(Square&&);
		~Square() override;

		void draw (cv::Mat&) const override;

	private:
		cv::Point	top_left_crd;
		cv::Point	bottom_right_crd;
};

#endif
