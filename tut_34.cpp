#include<iostream>
using namespace std;
class sample{
   int a= 0;
   public :
   sample(){} //Default constructor 
      sample(int num){
         a = num ;
      }
      sample(sample &num2){
         //copy constructor called!!
         //When no constructor found then C++ auto showed it own copy constructor;
         cout<<"Copy Constructor Called!!!"<< endl;
         a = num2.a; //Value of a;
      }
      void display(){
         cout<<"The number is : "<<a<<endl;
      }
};
int main(){
   sample   x(2), y, z(56);
   x.display();
   y.display();
   z.display();
   
   //Sample test --> 1
   sample z1(z);
   z1.display();
   
  //Sample test --> 2   
   sample z2;
   z2 = z;  // no constructor evoked;

  //Sample test --> 3
   sample z3;
   z3 = sample (z1); //Copy constructor called;
   z3.display();


return 0;
}