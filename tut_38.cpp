#include<iostream>
using namespace std;
class Base{
   protected :
      int a;
   private :
      int b;
};

   /* --->>>>>>>> public               private           protected
   private->>     not inherited        not inherited     not inherited
   public ->>     inherited/public     private           inherited/private    || protected = {Inherited + private} 
   protected->>   public               private           inherited
   */
class Derive : protected Base{
   int a  = 60; //Can't access in public bu use in derive protected mode;
   public   :
      int e = a;
};
int main(){
   Base b;
   // cout<<b.a; // Protected members can't be access in main function; 
   Derive c;
   cout<<c.e;
return 0;
}