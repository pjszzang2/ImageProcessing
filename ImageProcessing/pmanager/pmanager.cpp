#include <opencv/cv.h>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

#include "filter.h"


using namespace std;
using namespace cv;


class PManager{
private:
   int fnum;
   Mat ori_img;

public:
   PManager(){}

   void Run(){
      ori_img = imread("/home/jaeseok/jsp/ImageProcessing/ImageProcessing/img/atj.jpg", IMREAD_COLOR);
      }

   int Get_Fnum(){return fnum;}
   void Set_Fnum(int fn){fnum=fn;}

   void Op_Input(){
      cout << endl << endl << endl << "<< Choose a filter you want. >>"<< endl;
      cout <<"0.Program Termination   1.Original   2.Rotate   3.Brightness   4.Grayscale   5.Edge detection   6.Sharpening" <<endl<<endl;
      cin >> fnum;
      switch(fnum){
         case 1: imshow("Original Image", ori_img); break;
         case 2: Rotate(ori_img); break;
	 case 3: Brightness(ori_img); break;
         case 4: Grayscale(ori_img); break;
         case 5: Sobel(ori_img); break;
         case 6: Sharpening(ori_img); break;
         default : break;
      }
   }
   void Rotate(Mat param_img){
      int ern;
      cout<<"[ Rotate ]"<<endl;
      cout <<"Rotate Degree : 1. 90   2. 180   3. 270 >> ";
      rotate(param_img);
   }
   void Brightness(Mat param_img){
      cout << "[ Brightness ]" <<endl;
      brightness(param_img);
   }
   void Grayscale(Mat param_img){
      cout<<"[ Grayscale ]"<<endl;
      grayscale(param_img);
   }
   void Sobel(Mat param_img){
      cout << "[ Edge detection ]" <<endl;
      sobel(param_img);
   }
   void Sharpening(Mat param_img){
      cout << "[ Sharpening ]" <<endl;
      sharpening(param_img);
   }
};


int main()
{
   PManager PM;
   int termin=1;

   PM.Run();

   while(termin!=0){
      PM.Set_Fnum(0);
      PM.Op_Input();
      termin=PM.Get_Fnum();
      waitKey(0);
      destroyAllWindows();
   }

   PM.Run();

return 0;
}
