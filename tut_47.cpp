/**
 * A class to represent shop items with ID and price.
 */
#include<iostream>
using namespace std;
class shopItem{
    int id;
    float price;

    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void GetData(void){
            cout<<"Item Id: "<<id<<endl;
            cout<<"Item Price: "<<price<<endl;
        }
};
 
int main() {
    int size = 2;
    int p, i;
    float q;
    
    /**
     * Assigns the value of a shopItem pointer to another pointer.
     *
     * @param ptrtemp Pointer to a shopItem object.
     * @param ptr Pointer to a shopItem object to be assigned.
     *
     * @returns None
     */

     shopItem *ptr = new shopItem [size];
    shopItem *ptrtemp = ptr; 
for (i = 0; i < size; i++){
    cout<<"Enter the ID and the Price: "<<i+1<<endl;
    cin>>p>>q;
    //? (*ptr).setData(p,q); 
    //!another way;
    *ptr->setData(p,q);
    ptr++;
}
for(i = 0 ; i< size; i++) {
    cout << "Item number : "<< i+1 <<endl;
    //? (*ptrtemp).GetData(); 
    //!Another way;
    *ptrtemp->GetData();
    ptrtemp++;
}
return 0;
}