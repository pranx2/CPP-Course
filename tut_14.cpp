#include<iostream>
using namespace std;

   struct employee
   {
      /* data */
      int eid;
      char favChar;
      float salary;
   };
   

int main(){
struct employee pranto;
pranto.eid = 1;
pranto.favChar = 'P';
pranto.salary = 120000;


cout<<"Employee Id: "<<pranto.eid<<endl;
cout<<"Employee favChar: "<<pranto.favChar<<endl;
cout<<"Employee salary: "<<pranto.salary<<endl;

return 0;
}