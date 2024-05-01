#include<iostream>
using namespace std;
class complex{
   int data1;
   int data2;
      public :
         void complexNumber(int a = 0, int b = 0){ //Default Arguments;
            data1 = a ;
            data2 = b ;
         }
         void printNumber();
};
void complex ::printNumber(){
   cout<<"The data1 and data2 is "<<data1<<" and "<<data2<<endl;
}
int main(){
   complex c,d;
   c.complexNumber(); //call by reference; 
   c.printNumber();
return 0;
}