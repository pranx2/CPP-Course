#include <iostream>
using namespace std;
// sum of the complex number;
class complex; // Class declared;
class calculator{
public:
   int SumNumber(complex, complex);
   int SumComComplex(complex , complex);
};
class complex{
   int a, b;
   // Individual class access;
   friend int calculator ::SumNumber(complex o1, complex o2);
   // Entire Class Access;
   friend class calculator; // Now calculator all functions can use complex  class's private data;
public:
   void GetData(int x, int y){
      a = x;
      b = y;
   }
   void printData(){
      cout << a << "+" << b << "i" << endl;
   }
};
int calculator ::SumNumber(complex o1, complex o2){
   return (o1.a + o2.a);
}
int calculator ::SumComComplex(complex o1, complex o2){
   return (o1.b + o2.b);
}
int main(){
   complex c1, c2;
   c1.GetData(4, 5);
   c1.printData();
   c2.GetData(3, 7);
   c2.printData();

   calculator sumReal, sumCom;
   int Real = sumReal.SumNumber(c1, c2);
   cout << "Sum of real Number is: " << Real<<endl;

   int Com = sumCom.SumComComplex(c1, c2);
   cout<<"Sum of Complex Number is : "<<Com<<"i"<<endl;
   return 0;
}