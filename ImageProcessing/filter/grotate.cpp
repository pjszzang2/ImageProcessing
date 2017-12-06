#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
using namespace std;

void rotate(Mat ori_img)
{
	int height = ori_img.rows;
        int width = ori_img.cols;
	int cx = width/2;
        int cy = height/2;
        int degree = 90;
	int imgcstate = (ori_img.channels()==1) ? CV_8UC1 : CV_8UC3;

	Mat rot_img(height,width,imgcstate,Scalar(0,0,0));

	double out_height = rot_img.rows;
        double out_width = rot_img.cols;

        int rd;
        cin >> rd;
        degree=ern*90;

	double setha = -degree * 3.14 /180;

        for(int y=0;y<out_height;y++){
                for(int x=0;x<out_width;x++){

                        int newx = (x-cx)*cos(setha)+(y-cy)*sin(setha)+cx;
                        int newy = (x-cx)*sin(setha)+(y-cy)*cos(setha)+cy;

                        //grayimage
                        if(ori_img.channels()== 1 ){
                                if((newx < 0.0) || (newx >= out_width) || (newy < 0.0) || (newy >= out_height)){
                                        rot_img.at<uchar>(y,x) = 0;
                                }
                                else{
                                        uchar data = ori_img.at<uchar>(newy,newx);
                                        rot_img.at<uchar>(y,x)=data;
                                }
                        }

                        //RGB IMAGE
                        else if(ori_img.channels() == 3){
                                if(newx < 0.0 || (newx >= out_width) || (newy<0.0 || (newy >= out_height))){
                                        rot_img.at<Vec3b>(y,x)=0;
                                }
                                else{
                                        Vec3b val = ori_img.at<Vec3b>(newy,newx);
                                        rot_img.at<Vec3b>(y,x) = val;
                                }
                        }
                }
        }
	imshow("Output image", rot_img);
	waitKey(0);
}

