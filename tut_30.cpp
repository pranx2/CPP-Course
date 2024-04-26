#include<iostream>
using namespace std;
class complex
{
   int a, b;

public:
   complex(int , int ); // same as class name, not default type;
   void printNumber()
   {
      cout << a << " + " << b << "i" << endl;
   }
};
 // Parameterized construction that takes 2 parameters;
   complex ::complex(int x , int y){
      a = x;
      b = y;
   }
int main(){
   complex c1(4,6); //Implicit Cell;
   c1.printNumber();

   complex b = complex(6,7); //Explict Cell;
   b.printNumber();
return 0;
}