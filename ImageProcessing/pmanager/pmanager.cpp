#include <iostream>

using namespace std;

class PManager{
private:
   int fnum;

public:
   PManager(){
      cout <<"Choose a filter you want. "<< endl;
      cout <<"1.Rotate   2.Grayscale   3.blah blah ..." <<endl;
      cin >> fnum;
   }
   void Op_Fnum(){
      switch(fnum){
         case 1: cout<<"Rotate"<<endl; break;
         case 2: cout<<"Grayscale"<<endl; break;
         default : break;
      }
   }
};

int main(){
   PManager PM;
   PM.Op_Fnum();

return 0;
}
