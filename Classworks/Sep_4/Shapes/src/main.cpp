#include "../includes/Circle.h"
#include "../includes/Square.h"
#include "../includes/Triangle.h"

int main()
{
	cv::namedWindow("Image", 0);
	cv::Mat image(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));
	if (!image.data) {
        std::cout << "Could not open or find the image\n";
        exit(2);
	}
	 
	Circle circle(100, 150, 150);
	circle.draw(image);

	cv::Point p1 (300, 100);
	cv::Point p2 (450, 250);

	Square square (p1, p2);
	square.draw(image);

	cv::Point t1 (250, 350);
	cv::Point t2 (150, 450);
	cv::Point t3 (350, 450);

	Triangle triangle(t1, t2, t3);
	triangle.draw(image);
	cv::imshow("Image", image);
	cv::waitKey(0);
	return 0;
}
