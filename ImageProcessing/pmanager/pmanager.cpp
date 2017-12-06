#include <iostream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include "filter.h"


using namespace std;
using namespace cv;


class PManager{
private:
   int fnum;
   int rd;
   Mat ori_img;
public:
   PManager(){}
   void Run(){
      ori_img = imread("/home/doo/ImageProcessing/img/atj.jpg", IMREAD_COLOR);
      imshow("Original Image", ori_img);
   }
   int Get_Fnum(){return fnum;}
   void Set_Fnum(int fn){fnum=fn;}
   void Op_Input(){
      cout << endl << endl << endl << "<< Choose a filter you want. >>"<< endl;
      cout <<"0.Program Termination   1.Rotate   2.Grayscale   3.blah blah ..." <<endl<<endl;
      cin >> fnum;
      switch(fnum){
         case 1: Rotate(); break;
         case 2: Grayscale(ori_img); break;
         case 3: cout<<"Blah Blah"<<endl; break;
         default : break;
      }
   }
   void Rotate(){
      cout<<"[ Rotate ]"<<endl;
      cout <<"Enter the Rotate Degree : ";
      cin >> rd;
   }
   void Grayscale(Mat param_img){
      cout<<"[ Grayscale ]"<<endl;
      grayscale(param_img);
   }
};


int main(){
//   Mat ori_img;
  // ori_img = imread("/home/doo/ImageProcessing/img/atj.jpg", IMREAD_COLOR);

  // imshow("Original Image", ori_img);
   PManager PM;
   int termin=1;

   PM.Run();

   while(termin!=0){
      PM.Set_Fnum(0);
      PM.Op_Input();
      termin=PM.Get_Fnum();
   }

return 0;
}
