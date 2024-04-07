#include<iostream>
using namespace std;
int main(){
   int a = 70;
   int* b = &a; // address of a;[&]
   cout<<"The address of a is: "<<&a<<endl;
   cout<<"The address of a in b: "<<b<<endl;
   cout<<"The value of b is: "<<*b<<endl;
//  pointer to pointer
int** c = &b;
cout<<"The address of b is : "<<&b<<endl;
cout<<"The address of b in c is : "<<c<<endl;
cout<<"The value of b in c is : "<<**c<<endl;

return 0;
}