#include<iostream>
using namespace std;

// OOps - Classes and objects-->
class shop{
   int   itemID[100], itemPrice[100], counter;

   public :
      void intiCounter(void){counter = 0;};
      void setItem(void);
      void displayItem(void);
};

void  shop ::  setItem(void){
   cout<<"Enter the ID of the "<<counter+1<<" product: ";
      cin>>itemID[counter];
   cout<<"Enter the price of the "<<counter+1<<" product: ";
      cin>>itemPrice[counter];
   counter++;
}

void shop ::  displayItem(void){
   for(int i = 0; i < counter; i++){
      cout<<"Product ID:"<<itemID[i]<<" Price:"<<itemPrice[i]<<"BDT"<<endl;
   }
}

int main(){
   shop mall;
   mall.intiCounter();
   mall.setItem();
   mall.setItem();
   mall.setItem();
   mall.displayItem();
return 0;
}
