#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp> // filter2D를 사용하기 위해 include

using namespace cv;
using namespace std;

void sharpen(Mat &image,Mat &result){

	Mat kernel(3, 3, CV_32F, cv::Scalar(0));
	// 커널 생성(모든 값을 0으로 초기화)
	kernel.at<float>(1, 1) = 5.0; // 커널 값에 할당
	kernel.at<float>(0, 1) = -1.0;
	kernel.at<float>(2, 1) = -1.0;
	kernel.at<float>(1, 0) = -1.0;
	kernel.at<float>(1, 2) = -1.0;

	filter2D(image, result, image.depth(), kernel);
	// 영상 필터링
};

void sharpening(Mat img)
{
//	cv::Mat image = cv::imread("sp.jpg", 0);
//	Mat image = imread("/home/jaeseok/ImageProcessing/img/atj.jpg", IMREAD_COLOR);
	Mat result;

	sharpen(img, result);

	namedWindow("Image");
	imshow("Image", img);

	namedWindow("Result");
	imshow("Result", result);

	waitKey(50000);

}
