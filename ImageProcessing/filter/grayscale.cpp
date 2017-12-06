#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include<iostream>

using namespace cv;
using namespace std;
void grayscale(Mat ori_img)
{
   Mat gray_img;
   cvtColor(ori_img, gray_img, COLOR_BGR2GRAY);
   imshow("Grayscale Image", gray_img);
}
