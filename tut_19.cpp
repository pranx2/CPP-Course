#include<iostream>
using namespace std;
//Using same name into function can be used in C++;
//The program check name and arguments for compile;
float circle(double x){ //1 arguments;
   return (3.1416*x*x);
}
float circle(double x,double y){ // 2 arguments;
   return (2*x*y);
}
int main(){
   int x;
   cout<<"Enter the Radius: ";
   cin>>x;
   cout<<"Area of circle is: "<<circle(x)<<endl;
   cout<<"Circumference of circle is: "<<circle(x,3.1416)<<endl;
return 0;
}