#include<iostream>
using namespace std;


int sum (int a, int b){
   int c = a + b;
   return c;
}
// Call by value;
void swap( int a, int b){
   int temp = a;
   a = b;
   b = temp;
}
// Call by reference;
void swapPointer( int* a, int* b){
   int temp = *a;
   *a = *b;
   *b = temp;
}
int main(){
         cout<<"The sum is: "<<sum(4,5)<<endl;
   int a = 4, b = 5;
         cout<<"The value of a is : "<<a<<" The value of b is : "<<b<<endl;
      swap(a,b); //Call by value;
         cout<<"The value of a is : "<<a<<" The value of b is : "<<b<<endl;
      swapPointer(&a, &b); //Call by reference;
         cout<<"The value of a is : "<<a<<" The value of b is : "<<b<<endl;

   return 0;
}