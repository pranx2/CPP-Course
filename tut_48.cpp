/* 
This is a  pointer that holds the variables Data;
when it assign to the function like reference type then it react as a object;
 */
#include<iostream>
using namespace std;
class ase{
    int a;
    public :
        // void setData(int a){
        ase & setData(int a){
            /**
             * Assigns the value of 'a' to the member variable 'a' of the current object.
             *
             * @param a The value to be assigned to the member variable 'a'.
             *
             * @returns None
             */

            this->a = a;

            /**
             * Returns a reference to the current object.
             *
             * @return A reference to the current object.
             */
            //! return *this;
        }
        void getData(void){
            cout<<"The value of a is: "<<a<<endl;
        }
};
int main(){
ase test;

/**
 * Sets the data to be 4 and retrieves the data.
 *
 * @returns The data value set, which is 4 in this case.
 */
//! test.setData(4).getData();

test.setData(4);
test.getData();
return 0;
}