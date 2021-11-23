#include "std_lib_facilities.h"
using namespace std;

//perform math based on the uer's operations and numbers
 double doMath(double x, double y, string operation)
 {
     double z;
     if(operation=="+")
     {
        z=x+y;
     }else if(operation=="-")
     {
        z=x-y;
     }else if(operation=="*")
     {
        z=x*y;
     }else if(operation=="/")
     {
        z=x/y;
     }

     return z;
 }

int main(){


    double x,y;
    string operation;

  cout<< "Enter the operation and two numbers: ";
  cin>>operation>>x>>y;

  double z= doMath(x,y,operation);

  cout<<"The answer is "<<z;

    return 0;
}