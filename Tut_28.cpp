#include<iostream>
using namespace std;
class X;
class Y;

class X{
   int Data;
   public :
      void setData(int value){
         Data = value;
      }
   friend void SumNum(X, Y);
   friend void  swap (X & , Y &);
};

class Y{
   int Data2;
   public :
      void SetData(int value){
         Data2 = value;
      }
   friend void SumNum(X ,Y ); //Call by value;
   friend void  swap (X & , Y &); // Call bye Reference;
};

void SumNum(X x1, Y y1){
   cout<<"sum is : "<<x1.Data + y1.Data2<<endl;
}
void swap(X & x1 , Y & y1){ // Call bye Reference;
   cout<<"Value is: "<< x1.Data<<endl;
   cout<<"Value is: "<< y1.Data2<<endl;
   cout<<"After swap:"<<endl;
   int temp = x1.Data;
   x1.Data = y1.Data2;
   y1.Data2 = temp;
   cout<<"Value of x1 = "<<x1.Data<<endl;
   cout<<"Value of y1 = "<<y1.Data2<<endl;
}
int main(){
   X a;
      a.setData(10);
   Y b;
   b.SetData(20);

   swap(a,b);
SumNum(a,b);
return 0;
}