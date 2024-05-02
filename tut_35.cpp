#include<iostream>
using namespace std;
int count = 0;
class num{
   public :
      num(){
         count++;
            cout<<"This is the time when the constructor called for the object number "<<count<<endl;
      }
      ~num(){
         cout<<"This is the time when the deconstructor called for the object number "<<count<<endl;
         count--;
      }
};
int main(){
   cout<<"Entering the Main function."<<endl;
   cout<<"creating the Num - 1 object."<<endl;
   num n1;
   { // Creating a block;
      cout<<"Entering this num- 1 block."<<endl;
      cout<<"Creating two more object."<<endl;
         num n2, n3;
      cout<<"Exiting from the block."<<endl;
   }
   cout<<"back to main."<<endl;
return 0;
}