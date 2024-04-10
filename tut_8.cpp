#include<iostream>
using namespace std;
int main(){
   //If-Else case;
   int a = 50, b = 60;
   int age;
   cout<<"Tell me your age: ";
   cin>>age;
      
      if(age < 18){
         cout<<"You cannot come to the party :)"<<endl;
      }
      else if( age == 18){
         cout<<"welcome to the party!"<<endl;
      }
      else cout<<"You are welcome to the party!"<<endl;
return 0;
}
// If else