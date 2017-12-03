
#include <opencv/cv.h>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


using namespace cv;
using namespace std;

int main(){

   Mat ori_img;
   ori_img = imread("/home/doo/ImageProcessing/ImageProcessing/img/atj.jpg", CV_LOAD_IMAGE_COLOR);
   Mat gray;
   cvtColor(ori_img, gray, CV_BGR2GRAY);

   Mat sobel;
   Mat sobelX;
   Mat sobelY;
   Sobel(gray, sobelX, CV_8U, 1, 0);
   Sobel(gray, sobelY, CV_8U, 0, 1);
   sobel=abs(sobelX)+abs(sobelY);

   imshow("Sobel", sobel);
   waitKey(0);

return 0;
}
