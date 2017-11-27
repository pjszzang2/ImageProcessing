#include <iostream>
//#include <Grayscale.h>
//#include <Rotate.h>
//#include <Blah.h>

using namespace std;


class Filter{
private:
int rd;
public:
   void Rotate(){
      cout<<"[ Rotate ]"<<endl;
      cout <<"Enter the Rotate Degree : ";
      cin >> rd;
   }
   void Grayscale(){
      cout<<"[ Grayscale ]"<<endl;
   }
};

class PManager : Filter{
private:
   int fnum;
public:
   PManager(){}
   int Get_Fnum(){return fnum;}
   void Op_Input(){
      cout << endl << endl << endl << "<< Choose a filter you want. >>"<< endl;
      cout <<"0.Program Termination   1.Rotate   2.Grayscale   3.blah blah ..." <<endl<<endl;
      cin >> fnum;
      switch(fnum){
         case 1: Rotate(); break;
         case 2: Grayscale(); break;
         case 3: cout<<"Blah Blah"<<endl; break;
         default : break;
      }
   }
};


int main(){
   PManager PM;
   int termin=1;
   while(termin!=0){
      PM.Op_Input();
      termin=PM.Get_Fnum();
   }

return 0;
}
