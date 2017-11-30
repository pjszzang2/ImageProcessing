#include <opencv/cv.h>
#include <opencv/highgui.h>


int main() {
	IplImage *srcImage = cvLoadImage("/home/jaeseok/ImageProcessing/img/atj.jpg", -1);
	IplImage *rstImage1 = cvCreateImage(cvGetSize(srcImage), IPL_DEPTH_8U, 3);

	double mask1[3][3] = { 
		{1, -2, 1}, 
		{ -2, 5, -2 }, 
		{ 1, -2, 1 } };


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

