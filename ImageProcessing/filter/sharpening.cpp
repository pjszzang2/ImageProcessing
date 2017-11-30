#include <opencv/cv.h>
#include <opencv/highgui.h>


int main() {
	IplImage *srcImage = cvLoadImage("/home/jaeseok/ImageProcessing/img/atj.jpg", -1);
	IplImage *rstImage1 = cvCreateImage(cvGetSize(srcImage), IPL_DEPTH_8U, 3);

	//샤프닝 필터의 모든 계수의 합은 1이된다
	double mask1[3][3] = { 
		{0, -1, 0}, 
		{ -1, 5, -1 }, 
		{ 0, -1, 0 } };


	CvMat kernel1 = cvMat(3, 3, CV_64FC1, mask1);
	cvFilter2D(srcImage, rstImage1, &kernel1);

	cvNamedWindow("source image", CV_WINDOW_AUTOSIZE);
	cvNamedWindow("sharp1 image", CV_WINDOW_AUTOSIZE);


	cvShowImage("source image", srcImage);
	cvShowImage("sharp1 image", rstImage1);

	cvWaitKey(0);

	cvReleaseImage(&srcImage);
	cvReleaseImage(&rstImage1);
}

