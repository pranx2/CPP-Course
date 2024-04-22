#include <iostream>
using namespace std;
class complex
{
   int a, b;

public:
   void setData(int x1, int x2)
   {
      a = x1;
      b = x2;
   }
   void setDataBySum(complex y1, complex y2)
   {
      a = y1.a + y2.a;
      b = y1.b + y2.b;
   }
   void printNumber()
   {
      cout << a << '+' << b << 'i' << endl;
   }
};
int main()
{
   complex c1, c2, c3;
   c1.setData(1, 2);
   c1.printNumber();

   c2.setData(2, 4);
   c2.printNumber();

   c3.setDataBySum(c1, c2);
   c3.printNumber();

   return 0;
}