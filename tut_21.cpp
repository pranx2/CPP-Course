#include<iostream>
#include<string>
using namespace std;

class Info{
      private :
         string Name, Varsity, Nationality, Address;
         string BirthDate;

      public :
         string salary;
         string joiningDate;

      void setinfo(string  name, string  varsity, string  nationality, string  address,string  birthDate);
      void getinfo(){
            cout<<"Employee Name        : "<<Name       <<endl;
            cout<<"Employee varsity     : "<<Varsity    <<endl;
            cout<<"Employee Nationality : "<<Nationality<<endl;
            cout<<"Employee Address     : "<<Address    <<endl;
            cout<<"Employee BirthDate   : "<<BirthDate  <<endl;
            cout<<"Employee Joining Date: "<<joiningDate<<endl;
            cout<<"Employee Salary      : "<<salary     <<endl;
      }
};
   void Info :: setinfo(string  name, string  varsity, string  nationality, string  address, string birthDate){
         Name       = name;
         Varsity    = varsity;
         Nationality= nationality;
         Address    = address;
         BirthDate  = birthDate;
   }
int main(){
   Info pranto;
   pranto.joiningDate   = "01 january 2024";
   pranto.salary  = "12000 BDT";
   pranto.setinfo("PRANTO", "Uttara University", "Bangladesh", "Mirpur-14", "16 December 2003");
   pranto.getinfo();
return 0;
}