#include<iostream>
using namespace std;
// creating class;
class num_x1 { 
   protected :
      int num1;
   public : 
      void get_number1(int a){
         num1 = a;
      }
};
//creating another classes;
class  num_x2{
   protected :
      int num2;
   public:
      void get_number2(int b){
         num2 = b ;
      }
};
// Multi  base classes in one derive classes;
class derive : public num_x1  , public num_x2{
   public :
      void show(void){
         cout<<"The first number is : "<<num1<<endl;
         cout<<"The second number is : "<<num2<<endl;
         cout<<"The sum of two  number is : "<<num1 + num2<<endl;
   }
};
int main(){
   derive xy;
   xy.get_number1(50);
   xy.get_number2(50); 
   xy.show();
return 0;
}