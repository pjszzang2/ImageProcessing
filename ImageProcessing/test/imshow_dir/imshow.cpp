#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
   Mat testImage = imread("/home/doo/ImageProcessing/ImageProcessing/img/atj.jpg");
   imshow("testImage", testImage);
   waitKey(0);
   return 0;
}
