#include<iostream>
using namespace std;
int digit = 10; //Global variables;
void sol(){
   cout<<digit<<"\n";
}

int main(){
   int a = 10;//local variables;
   int b = 12;
   sol();
   cout<<"a= "<<a <<"\nb= "<< b;
}
// Function;