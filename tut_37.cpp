#include<iostream>
using namespace std;
class Base{
   int data1 ;
   public : 
      int data2;
      void SetData();
      int GetData1();
      int GetData2();
};
int  Base :: GetData1(){
   return data1;
}
int Base :: GetData2(){
   return data2;
}
void Base :: SetData(void){
   data1 = 20;
   data2 = 10;
}
// class derive : private Base{ //id private base function cannot access;
class derive : public Base{ //id private base function cannot access;
   int data3;
   public :
      void process();
      void display();
};
void derive :: process(){
   data3 =  GetData1() * GetData2();
}
void derive :: display(){
   cout<<"The number of data 1 is : "<<GetData1()<<endl;
   cout<<"The number of data 2 is : "<<GetData2()<<endl;
   cout<<"The number of data 3 is : "<<data3<<endl;
}

int main(){
   derive der;
   der.SetData();
   der.process();
   der.display();
return 0;
}
