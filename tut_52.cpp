/**
 * This code includes the necessary standard C++ libraries for the program.
 * It is recommended to include specific headers instead of the entire bits/stdc++.h header
 * to reduce compilation time and avoid potential conflicts.
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
        /**
         * Virtual function to display information.
         * 
         * This is a pure virtual function that must be implemented by derived classes.
         * It serves as an interface for displaying information specific to each derived class.
         */
        virtual void display() = 0;
};


//      Abstract Function must have a pure virtual function.
    //  it don't work by itself but it can derive through others class objects;