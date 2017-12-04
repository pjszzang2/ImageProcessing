#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

void grayscale(Mat ori_img)
{
   Mat gray_img;
//   ori_img = imread("/home/jaeseok/ImageProcessing/img/atj.jpg", IMREAD_COLOR);
   cvtColor(ori_img, gray_img, COLOR_BGR2GRAY);
//   imshow("Original Image", ori_img);
   imshow("Grayscale Image", gray_img);
   while(cvWaitKey(0)==0);
//return 0;
}
