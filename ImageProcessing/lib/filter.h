#ifndef FILTER_H
#define FILTER_H

#include <opencv/cv.h>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <opencv2/core/core.hpp>

using namespace cv;
using namespace std;


void brightness(Mat ori_img);
void grayscale(Mat ori_img);
void rotate(Mat ori_img);
void sharpening(Mat img);
void sobel(Mat ori_img);

#endif


