#include<iostream>
using namespace std;
class complex
{
   int a, b;
   
public:
complex(int x, int y){
       a = x;
       b = y;
   }
   complex (int x){ //Construction overloading;
      a = x;
      b = 0;
   }
    // same as class name, not default type;
   void printNumber()
   {
      cout << a << " + " << b << "i" << endl;
   }
};

int main(){
   complex c1(4,6); //Implicit Cell;
   c1.printNumber();

   complex b = complex(6,7); //Explict Cell;
   b.printNumber();
   complex c3(4);
   c3.printNumber();
return 0;
}