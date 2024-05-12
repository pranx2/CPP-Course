/**
 * A simple class constructor example.
 *
 * @param i The value to initialize 'a' with.
 * @param j The value to initialize 'b' with.
 *
 * @returns None

 *! Syntax for initialization list in constructor:
  *! constructor (argument-list) : initilization-section
*  *{
*  *    assignment + other code;
*  *}
*/
#include<iostream>
using namespace std;
class test{
   int a,b;
   public :
   test(int i , int j ) : a( i ), b ( j ){
      cout<<"A value is : "<<a<<endl;
      cout<<"B value is : "<<b<<endl;
      cout<<"<<Construction executed>>"<<endl;
   }
};

int main(){
   test ( 4, 6);

return 0;
}