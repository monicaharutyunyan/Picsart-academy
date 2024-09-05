#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <opencv2/opencv.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include <opencv2/core.hpp>

class	Shape{
	public:
		Shape();
		virtual ~Shape();
		virtual void draw(cv::Mat&) const;
};

#endif
