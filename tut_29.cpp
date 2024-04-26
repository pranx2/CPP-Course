#include <iostream>
using namespace std;
/*
   properties of Construction
   -->   IT should be declared in th public section of the class;
   -->   They are automatically invoked whenever the object is created;
   -->   Do not hae return types and do not have return types;
   -->   it can have default Arguments;
   -->   We cannot Refer to the address;
   */
class complex
{
   int a, b;

public:
   complex(void); // same as class name, no return types;
   void printNumber()
   {
      cout << a << " + " << b << "i" << endl;
   }
};
complex ::complex(void)
{ // Construction; // use same name as class and function;
   a = 10;
   b = 20;
}

class info{
      string d,f;
      public :
         info(void);
      void  printData(){
      cout<<d<<" "<<f<<endl;
   }

};

 info :: info(void){
   d = "PranTo";
   f = "Kumar";
 }

int main()
{
   complex c1, c2, c3;
   c1.printNumber();
   c2.printNumber();
   c3.printNumber();


info Data;
   Data.printData();
   return 0;
}