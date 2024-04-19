#include<iostream>
using namespace std;


class Employee{
   private : // Only functions can be access;
      int a, b, c;
   public : //Anyone can be access;
      int d, e;
         void setData(int a1, int b1, int c1); //Declaration;
         void getData(){
            cout<<"The Value of a is : "<<a<<endl;
            cout<<"The Value of b is : "<<b<<endl;
            cout<<"The Value of c is : "<<c<<endl;
            cout<<"The Value of d is : "<<d<<endl;
            cout<<"The Value of e is : "<<e<<endl;
         }
};

   void Employee :: setData(int a1, int b1, int c1){
      a = a1;
      b = b1;
      c = c1;
   }
int main(){

   Employee pranto;
   // pranto.a = 60; // This cannot be access by public.it will error trough;
   pranto.d = 69;
   pranto.e = 79;
   pranto.setData(1,2,4);
   pranto.getData();
return 0;
}