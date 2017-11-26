#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
void rotateImage(Mat &input, Mat &output, int degree);

int main()
{
	Mat ori_img;
	ori_img = imread("/home/doo/ImageProcessing/ImageProcessing/img/atj.jpg", IMREAD_COLOR);

	int height = ori_img.rows;
	int width = ori_img.cols;

	int imgcstate = (ori_img.channels()==1) ? CV_8UC1 : CV_8UC3;

	Mat rot_img(height,width,imgcstate,Scalar(0,0,0)); //default

	int degree = 90; //Rotate degree set

        printf("90 180 270 : ");
        scanf("%d", &degree);

	rotateImage(ori_img,rot_img,degree); //Rotate method

	imshow("Output image", rot_img);
	waitKey(0);

	return 0;

}

void rotateImage(Mat &input, Mat &output, int degree){

	//execute the rotate
	double height = output.rows;
	double width = output.cols;

	int cx = width/2;
	int cy = height/2;
	double setha = -degree * 3.14 / 180.0; 

	for(int y=0;y<height;y++){
		for(int x=0;x<width;x++){

			int newx = (x-cx)*cos(setha)+(y-cy)*sin(setha)+cx;
			int newy = (x-cx)*sin(setha)+(y-cy)*cos(setha)+cy;

			if(input.channels() == 3){
				if(newx < 0.0 || (newx >= width) || (newy<0.0 || (newy >= height))){
					output.at<Vec3b>(y,x)=0;
				}
				else{
					Vec3b val = input.at<Vec3b>(newy,newx);
					output.at<Vec3b>(y,x) = val;
				}
			}
		}
	}
}
