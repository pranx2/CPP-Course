#include<iostream>
using namespace std;

// int sum (int a, int b){   ////function name (Arguments)
//    int c = a + b; 
//    return c;
// }
int sum (int a, int b);
int main(){
   int num1, num2;
   cout<<"Enter first number: "<<endl;
   cin>>num1;
   cout<<"Enter second number: "<<endl;
   cin>>num2;

   cout<<"The sum is : "<<sum(num1, num2);  // function calling;
return 0;
}

int sum (int a, int b){ // function initializing
   int c = a + b; 
   return c;
}