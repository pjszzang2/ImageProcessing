
#include <opencv/cv.h>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


using namespace cv;
using namespace std;

void sobel(Mat ori_img){
   Mat gray;
   cvtColor(ori_img, gray, CV_BGR2GRAY);

   Mat sobel;
   Mat sobelX;
   Mat sobelY;
   Sobel(gray, sobelX, CV_8U, 1, 0);
   Sobel(gray, sobelY, CV_8U, 0, 1);
   sobel=abs(sobelX)+abs(sobelY);
   imshow("Sobel", sobel);
}
