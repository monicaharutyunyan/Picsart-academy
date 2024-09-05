#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "../includes/Shape.h"

class Triangle : public Shape
{
	public:
		Triangle();
		Triangle(cv::Point, cv::Point, cv::Point);
		Triangle(const Triangle&);
		Triangle(Triangle&&);
		Triangle& operator= (const Triangle&);
		Triangle& operator= (Triangle&&);
		~Triangle() override;

		void draw (cv::Mat&) const override;

	private:
		cv::Point p1;
		cv::Point p2;
		cv::Point p3;
};

#endif
