#include<iostream>
using namespace std;
/**
 * Represents an imaginary number with real and imaginary parts.
 */
class imaginary_number{
      private :
         int a,b;
      public:
         void set_data(int ax, int bi){
            a = ax;
            b = bi;
         }
         void get_data(void){
            cout<<"a is : "<<a<<endl;
            cout<<"b is : "<<b<<endl;
         }
};
int main(){
   imaginary_number test1;
   /**
    * Sets the data of the test1 object to the specified values and then retrieves the data.
    *
    * @param value1 The first value to set in the test1 object.
    * @param value2 The second value to set in the test1 object.
    *
    * @returns The data stored in the test1 object after setting it.
    */
   test1.set_data(23,50);
   test1.get_data();

   //!USing PTR

   /**
    * Accesses and modifies the data of an imaginary number object using a pointer.
    *
    * @param ptr A pointer to an imaginary_number object.
    *
    * @returns None
    */
   imaginary_number *ptr = &test1;
   (*ptr).set_data(100,500);
   (*ptr).get_data();


   //!Another way;
   /**
    * Creates a new instance of an imaginary_number object using dynamic memory allocation,
    * sets the data values of the object to 600 and 900, and then retrieves and prints the data.
    *
    * @param None
    *
    * @returns None
    */
   imaginary_number *ptr1 = new imaginary_number;
   ptr->set_data(600, 900);
   ptr->get_data();
return 0;
}