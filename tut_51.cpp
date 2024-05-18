/**
 * A program that demonstrates inheritance and polymorphism in C++.
 *
 * The program defines a base class MainBranch with attributes Title_name and Rating.
 * It also defines two derived classes Subbranch_01 and Subbranch_02 that inherit from MainBranch.
 * Each derived class has its own additional attribute and overrides the display method.
 *
 * The main function creates instances of Subbranch_01 and Subbranch_02, initializes their attributes,
 * and stores them in an array of MainBranch pointers. It then calls the display method for each object
 * using the base class pointer to demonstrate polymorphism.
 *
 * @return 0 upon successful execution.
 */
#include<bits/stdc++.h>
using namespace std;
class MainBranch{
    protected:
        string Title_name;
        float Rating;
    public :
        MainBranch(string t, float r){
            Title_name = t;
            Rating = r ;
        }
        virtual void display(){
            cout<<"MAIN BRANCH !!!!"<<endl;
        }
};

class Subbranch_01 : public MainBranch{
    int sub_branch_no1;
    public:
        Subbranch_01(string t, float r, int no_sub) : MainBranch(t,  r){
            sub_branch_no1= no_sub;
        }
    void display(){
        cout<<"Sub Branch  01 has been called !!!"<<endl;
        cout<<"title of sub branch is  : "<<Title_name<<endl;
        cout<<"Rating of sub branch is  : "<<Rating<<endl;
        cout<<"Number of  of sub branch is  : "<<sub_branch_no1<<endl;
    }
};
class Subbranch_02 : public MainBranch{
    int sub_branch_no2;
    public :
        Subbranch_02(string t, float r, int no_sub) : MainBranch(t, r){ //!Construction name must be same ;
            sub_branch_no2 = no_sub;
        }
    void display(){
        cout<<"Sub Branch  01 has been called !!!"<<endl;
        cout<<"title of sub branch is  : "<<Title_name<<endl;
        cout<<"Rating of sub branch is  : "<<Rating<<endl;
        cout<<"Number of  of sub branch is  : "<<sub_branch_no2<<endl;
    }
};
int main(){
    string title;
    float rating;
    int no;

    title = "THIS IS SUB BRANCH  01 OF MAIN BRANCH!!!";
    rating =  5.00;
    no = 01;
    Subbranch_01 SMB(title, rating, no);
    // SMB.display();

    title = "THIS IS SUB BRANCH 02  OF MAIN BRANCH!!!";
    rating =  4.00;
    no = 02;
    Subbranch_02 SMB2(title, rating, no);
    // SMB2.display();



            //? another way;
                /**
                 * Assigns MainBranch pointers to elements of the 'sub' array.
                 *
                 * @param sub An array of MainBranch pointers.
                 * @param SMB Pointer to the first MainBranch object.
                 * @param SMB2 Pointer to the second MainBranch object.
                 *
                 * @returns None
                 */
                MainBranch* sub[2];
                sub[0] = &SMB; // point through  display !
                sub[1] = &SMB2;

                sub[0]->display(); //VAriables name is very clear to define...
                sub[1]->display();

return 0;
}