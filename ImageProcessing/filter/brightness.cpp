#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include<iostream>

using namespace cv;
using namespace std;

void brightness(Mat ori_img)
{

	Mat imgH = ori_img + Scalar(50, 50, 50);
	Mat imgL = ori_img + Scalar(-50, -50, -50);

	namedWindow("High Brightness", CV_WINDOW_AUTOSIZE);
	namedWindow("Low Brightness", CV_WINDOW_AUTOSIZE);

	imshow("High Brightness", imgH);
	imshow("Low Brightness", imgL);
}
