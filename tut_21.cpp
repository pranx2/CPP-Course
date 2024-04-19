#include<iostream>
using namespace std;

class Budget{
      private :
         int Shirt, Pant, Shoes;
      public :
         int totalPayment;

      void setinfo(int shirt, int pant, int shoes);
      void getinfo(){
            cout<<"Shirt price is: "           <<Shirt<<endl;
            cout<<"Pant price is: "            <<Pant<<endl;
            cout<<"Shoes price is: "           <<Shoes<<endl;
            cout<<"Your remaining payment is: "<<totalPayment<<endl;
      }
};
   void Budget :: setinfo(int shirt, int pant, int shoes){
      Shirt = shirt;
      Pant  = pant;
      Shoes = shoes; 
   }
int main(){
   Budget pranto;
      pranto.setinfo(500,700,1600);
      pranto.totalPayment = 2800;
      pranto.getinfo();
return 0;
}