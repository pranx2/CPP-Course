#include<bits/stdc++.h>
using namespace std;
class base{
    public: 
    int a = 50;
    virtual void display ( ){ // ! if we remove @virtual then it called it's own objects; 
    // void display ( ){ // ! if we remove @virtual then it called it's own objects; 
        cout<<"Pointer is not located to derive class. it's showing it own class objects;"<<endl;
        cout<<"a is : "<<a<<endl;
    }
};
class derive : public base{
    public:
        int b = 100;
        void display (){
            cout<<"Pointer has bees located to @base Class to @Derive Class!!!"<<endl<<
            "Now it's Showing @derive objects-;"<<endl;
            cout<<"a is showing from @class Derive : "<<a<<endl;
            cout<<"b is : "<<b<<endl;
            }
};
int main(){
    base *base_ptr; //base pointer to "base_pointer";
    derive  derive_ptr;
    base_ptr =  &derive_ptr; //Base_pointer addressed by @derive_ptr;
    base_ptr->display();

return 0;
}