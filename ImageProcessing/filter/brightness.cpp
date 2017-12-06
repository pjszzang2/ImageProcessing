#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include<iostream>

using namespace cv;
using namespace std;

void brightness(Mat ori_img)
{
//	Mat ori_img = imread("/home/jaeseok/ImageProcessing/img/atj.jpg", CV_LOAD_IMAGE_COLOR);

 
	Mat imgH = ori_img + Scalar(50, 50, 50); 
	
 
	Mat imgL = ori_img + Scalar(-50, -50, -50); 
 
	namedWindow("Original", CV_WINDOW_AUTOSIZE);
	namedWindow("High Brightness", CV_WINDOW_AUTOSIZE);
	namedWindow("Low Brightness", CV_WINDOW_AUTOSIZE);
 
	imshow("Original Image", ori_img);
	imshow("High Brightness", imgH);
	imshow("Low Brightness", imgL);
 
	waitKey(0);
 
	destroyAllWindows();

//	return 0;
}
