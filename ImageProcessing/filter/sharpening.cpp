#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

void sharpening(Mat img)
{
	Mat result;
        Mat kernel(3, 3, CV_32F, cv::Scalar(0));
        kernel.at<float>(1, 1) = 5.0;
        kernel.at<float>(0, 1) = -1.0;
        kernel.at<float>(2, 1) = -1.0;
        kernel.at<float>(1, 0) = -1.0;
        kernel.at<float>(1, 2) = -1.0;
        filter2D(img, result, img.depth(), kernel);
	imshow("Sharpening", result);
}
