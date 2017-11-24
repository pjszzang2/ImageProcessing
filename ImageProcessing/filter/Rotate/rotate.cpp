#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

using namespace cv;

int main()
{
   Mat ori_img, rot_img;
   ori_img = imread("/home/doo/ImageProcessing/ImageProcessing/img/atj.jpg", IMREAD_COLOR);
   
  int height = ori_img.rows;
  int width = ori_img.cols;

  int imgcstate = (ori_img.channels()==1) ? CV_8UC1 : CV_8UC3;

  rot_img(height,width,imgcstate,Scalar(0)); //default

  int degree = 90; //Rotate degree set
  rotateImage(ori_img,rot_img,degree); //Rotate method

  imshow("Output image", rot_img);
  waitKey(0);
  destoryAllwindows();

  return 0;

}

void rotateImage(Mat &input, Mat &output, int degree){

	//execute the rotate
}
