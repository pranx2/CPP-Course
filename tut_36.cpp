#include<iostream>
using namespace std;
class  employee{
   public :
      int id;
      int salary = 2000;
      employee(){} // inheritance need default function for running the class and the base class;
      employee(int epid){
         id  = epid ;
         // cout<<"The id of the employee is : "<<id<<endl;
      }
};
//Inheritance ;
// derive class : visibility : base class; /// if visibility is not given then it is default private;
class programmer :public employee { 
   public :
      int id;
      programmer (int epid){
         id = epid;
      }
      void getData(){
         cout<<"The id of programmer is : "<<id<<endl;
      }
};
int main(){
   employee pranto(80), pritom (78);
   cout<<pritom.id<<endl;
   cout<<pritom.salary<<endl;
   cout<<pranto.id<<endl;
   cout<<pranto.salary<<endl;


   programmer pran(56);
   cout<<pran.id<<endl; //Here id is access able but not salary; cz visibility of id is public not salary is public;
   cout<<pran.salary<<endl;
   pran.getData(); // declared by function;
return 0;
}