#include<iostream>
using namespace std;
/*
   properties of Friend Function;
      -->Can be access non member of class function;
      -->Not in the scope of class;
      -->Can not be called in class function;
            ex: c1.SumNumber() == Invalid;
      -->It can be declared inside or private section of the Class;
      -->can not access the members directly  by their names.
            ex : cout<<a;
      */
class complex{
   int a;
   int b;
   public :
      void SetData(int num1, int num2){
         a = num1;
         b = num2;
      }
      //Below lines means-->Declaration of using outer function can access private data;
      friend complex SumNumber(complex o1, complex o2); 
      void printNumber(){
         cout<<a<<" + "<<b<<"i"<<endl;
      }
};

   complex SumNumber(complex o1, complex o2){ //Function declaration;
      complex sum;
      sum.SetData((o1.a + o2.a) , (o1.b + o2.b));
      return sum;
   }
int main(){
   complex c1,c2,c3;
      c1.SetData(5,4);
      c1.printNumber();
      c2.SetData(3,6);
      c2.printNumber();
      
      c3 = SumNumber(c1, c2); //Function Calling;
      c3.printNumber();
return 0;
}