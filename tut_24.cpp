#include <iostream>
using namespace std;

// Array of Objects & Passing Objects as Function Arguments;
class employee
{
   int id;
   int salary;

public:
   void setID(void)
   {
      salary = 12000;
      cout << "Enter the ID: ";
      cin >> id;
   }
   void getID(void)
   {
      cout << "Id of the employee is : " << id << endl;
   }
   void GetSalary(void){
      cout<<"The salary of the employee is : "<<salary<<endl;
   }
};

int main()
{
   // employee pranto, rakib,sakib;

   // pranto.setID();
   // pranto.getID();
   employee p[4]; //Using with array;
   for (int i = 0; i < 4; i++)
   {
      p[i].setID();
      p[i].getID();
      p[i].GetSalary();
   }

   return 0;
}