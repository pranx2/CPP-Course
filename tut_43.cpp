
//?_________________________Construction Rules_____________________
/*
*Case : 1 
        class B : public A{
            !order of execution of construction -> A() then B () 
         };
*case : 2 
         class C : public A , public B {
            !Order of execution of construction -> A() then B() and then C() 
         };
*case : 3 
         class C: Public B, Virtual A{
            !order of execution of construction -> A() then B(), and C()
         }
*/
/**
 * Demonstrates multiple inheritance and class hierarchy.
 * 
 * @class Base1: Represents the first base class with an integer data member.
 * @class Base2: Represents the second base class with an integer data member.
 * @defgroup Derive: Represents a derived class that inherits from Base1 and Base2.
 * 
 * @param None
 * 
 * @returns None
 */

#include<iostream>
using namespace std;

/**
 * Base1 class represents a base class with a private data member and a method to print the data.
 */
class Base1{
   private: 
      int data1;
   public :
      Base1(int i){
         data1 = i;
         cout<<"Base class 1 has been called!"<<endl;
      }
      void print_data_base1(void){
         cout<<"Base 1 is : "<<data1<<endl;
      }
};
/**
 * Represents a base class with an integer data member.
 */
class Base2 {
   private :
      int data2 ;
   public :
    Base2(int i){
      data2 = i;
      cout<<"Base class 2 has been called!"<<endl;
    }
   void Print_data_base2(void){
      cout<<"Base 2 is : "<<data2 << endl;
   }
};

/**
 * Represents a derived class that inherits from Base1 and Base2.
 *
 * This class contains two private member variables Derive1 and Derive2.
 * It initializes the Base1 and Base2 classes with the provided values of a and b.
 *
 * @param a The value to initialize Base1.
 * @param b The value to initialize Base2.
 * @param c The value to initialize Derive1.
 * @param d The value to initialize Derive2.
 *
 * @returns None
 */
class Derive: public Base1, public Base2{
   private :
      int Derive1, Derive2;
   public :
      Derive (int a, int b, int c, int d) : Base1(a), Base2(b){
         Derive1 = c;
         Derive2 = d;
         cout<<"Derive class has been called!"<<endl;
      }
      void display(void){
         cout<<"Derive 1 is : "<<Derive1<<endl;
         cout<<"Derive 2 is : "<<Derive2<<endl;
      }
};

int main(){
   Derive Test(10,500,50,400);
   Test.print_data_base1();
   Test.Print_data_base2();
   Test.display();
return 0; 
} 