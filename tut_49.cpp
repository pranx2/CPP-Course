#include<iostream>
using namespace std;
class base{
    public: 
    int a;
    void display ( ){
        cout<<"a is : "<<a<<endl;
    }
};
class derive : public base{
    public:
        int b;
        void display (){
            cout<<"a is showing from @class Derive : "<<a<<endl;
            cout<<"b is : "<<b<<endl;
            }
};
int main(){
    base *base_ptr;
    base  base_obj;
    derive  derive_obj;
    /**
     * Assigns a value to a member variable of a derived object through a base pointer.
     * Calls the display method of the derived object using the base pointer.
     *
     * @param base_ptr Pointer to the base class object.
     * @param derive_obj The derived object whose member variable is being assigned a value.
     *
     * @returns None
     */
    base_ptr = &derive_obj;
    base_ptr->a = 10;
    base_ptr->display();

    /**
     * Accesses a derived class object through a pointer and sets its member variables.
     * Calls the display method of the derived class object.
     *
     * @param derive_ptr A pointer to a derived class object.
     * @param derive_obj The derived class object to be accessed.
     * @param a The value to set for member variable 'a'.
     * @param b The value to set for member variable 'b'.
     *
     * @returns None
     */
    derive *derive_ptr;
    derive_ptr = &derive_obj;
    derive_ptr->a = 100;
    derive_ptr->b = 200;
    derive_ptr->display();
    
return 0;
}