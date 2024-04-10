#include<iostream>
   using namespace std;
int c = 79; //Global variables;

int main(){
   int a,b,c;
      cout<<"Enter the a variables data : "<<endl;
      cin>>a;
      cout<<"Enter the a variables data : "<<endl;
      cin>>b;
      c = a+b; //Local variable;
      cout<<"Enter the a variables data : "<<c<<endl;

      cout<<"Global variables : "<<::c<<endl; // printing global variables;
   // Typecasting;
   
   float x = 60.99;
   cout<<"the float value of int is : "<<(int)x<<endl;
   return 0;
}