#include<iostream>
using namespace std;

   typedef struct employee
   {
      /* data */
      int eid;
      char favChar;
      float salary;
   } ep; //shortname/nickname;  
   
   union money
   {//only use one section; for better memory managements;
      int Euro; // 4 bytes
      char dollar; // 1 bytes
      float pounds; // 4 bytes
   };
   


int main(){
   ep pranto;
pranto.eid = 1;
pranto.favChar = 'P';
pranto.salary = 120000;


// cout<<"Employee Id: "<<pranto.eid<<endl;
// cout<<"Employee favChar: "<<pranto.favChar<<endl;
// cout<<"Employee salary: "<<pranto.salary<<endl;


//UNION;

union money m1;
   m1.Euro = 50;
   m1.dollar = 60;
   m1.pounds = 30;
   

//    // cout<<"Euro is : "<<m1.Euro<<endl;
//    // cout<<"dollar is : "<<m1.dollar<<endl;
//    cout<<"pounds is : "<<m1.pounds<<endl;

   enum meal{breakfast, lunch, dinner};
      cout<<breakfast<<endl;
      cout<<lunch<<endl;
      cout<<dinner<<endl; 
return 0;
}