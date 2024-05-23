/**
 * Displays the elements of a vector.
 *
 * @param v A reference to a vector containing elements of type T1.
 *
 * @returns None
 */
#include<bits/stdc++.h>
using namespace std;
template <class T1>
void display (vector <T1> &v){
        for (int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
            // cout<<v.at(0)<<" ";
        }
        cout<<endl;
}
int main(){
vector <int> vec; //* * Declaration of a vector that stores integers.
int elements;
for (int i = 0; i < 4; i++){
    cout<<"Enter the elements: ";
    cin>>elements;
    vec.push_back(elements); // * Adds an element to the end of the vector.
}

// vec.pop_back();  // * Removes the last element from a vector.
display(vec);

vector <int> :: iterator iter = vec.begin(); //* point the newly inserted elements..
// vec.insert(iter, 69); //* it change the position of the elements to the top..
display(vec);

vector <int> ::iterator iter2 = vec.end(); //* point the newly inserted elements.
// vec.insert( iter2,        200,          69);//*  change/add  the end;
    //![iterator name],[how many],[Which number]
display(vec);
    vector<int> vec_test(100,6); //* number of displaying, elements;
    display(vec_test);
    cout<<vec_test.size(); //* vector size;
return 0;
}