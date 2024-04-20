#include <iostream>
using namespace std;

// Static Data members-->
class employee
{
   int id;
   static int count; // By default count = 0;
public:
   void setData(void)   //Static Function;
   {
      cout << "Enter the id: ";
      cin >> id;
      count++;
   }
   void getData(void) //Static Function;
   {
      cout << "ID of this employee is : " << id << " and this is employee number: " << count << endl;
   }
   static void getCount(void){   //Only access the static function;
      cout<<"Value of  Count is: "<<count<<endl;
   }
};

int employee ::count = 1000; // By default count = 0;

int main()
{
   employee pranto, Pritom, pranxten;
   pranto.setData();
   pranto.getData();
   employee:: getCount(); //only access with class operator.

   Pritom.setData();
   Pritom.getData();
   employee:: getCount();

   pranxten.setData();
   pranxten.getData();
   employee:: getCount();

   return 0;
}