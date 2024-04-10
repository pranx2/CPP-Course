#include<iostream>
using namespace std;

   int fib(int n){
      if( n < 2){
         return 1;
      }
      return fib(n-1) + fib(n-2); //Recursion;
   }
int main(){
   int a;
   cout<<"Enter the number:"<<endl;
   cin>>a;
   cout<<"The Sequence of "<<a<<" is: "<<fib(a)<<endl;
return 0;
}
