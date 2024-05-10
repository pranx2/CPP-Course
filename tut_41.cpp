#include<iostream>
using namespace std;
class calculator{
   protected :
      int x;
      int y;
   public:
      void get_x(int x_d);
      void get_y(int y_d);
};
void calculator ::get_x(int x_d){
   cin>>x_d;
   x = x_d;
}
void calculator ::get_y(int y_d){
   cin>>y_d;
   y = y_d;
}
class display : public calculator{
   public : 
      void sum(void){
         cout<<"Total sum is : "<<x + y<<endl;
      }
      void multi(void){
         cout<<"Total multiplication is :"<< x * y<<endl;
      }
      void Div(void){
         cout<<"After division :"<<x / y <<endl;
      }
      void sub(void){
         cout<<"After Subtraction :"<<x - y << endl;
      }
};
int main(){
   display test;
   int get_value,xd,yd;
   cout<<"Enter which operation you want to do"<<endl<<endl;
   cout<<"For summation press       -: 1"<<endl;
   cout<<"For subtraction press     -: 2"<<endl;
   cout<<"For Multiplication press  -: 3"<<endl;
   cout<<"For Division press        -: 4"<<endl;

   cout<<"Enter the value: " ;
   cin>>get_value;
      switch (get_value)
      {
      case 1:
         cout<<"Calculating Summation..."<<endl;
         cout<<"Enter two value : "<<endl;
            test.get_x(xd);
            test.get_y(yd);
            test.sum();
         break;
      case 2:
         cout<<"Calculating subtraction..."<<endl;
         cout<<"Enter two value : "<<endl;
            test.get_x(xd);
            test.get_y(yd);
            test.sub();
         break;
      case 3:
         cout<<"Calculating Multiplication..."<<endl;
         cout<<"Enter two value : "<<endl;
            test.get_x(xd);
            test.get_y(yd);
            test.multi();
         break;
      case 4:
         cout<<"Calculating Division..."<<endl;
         cout<<"Enter two value : "<<endl;
            test.get_x(xd);
            test.get_y(yd);
            test.Div();
         break;
      
      default:
         cout<<"Input Valid data..."<<endl;
         break;
      }
return 0;
}