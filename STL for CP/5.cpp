#include<bits/stdc++.h>
using namespace std;
 void display ( list <int> &lst){
    list <int> :: iterator iter;
    for (iter = lst.begin(); iter != lst.end(); iter++)
    {
        cout<<*iter<<endl;
    }
    cout<<endl;
 }
int main(){
list <int> list_data, list2;
//* method -1 to insert data;
list_data.push_back ( 1 );
list_data.push_back ( 2 );
list_data.push_back ( 3 );
list_data.push_back ( 4 );
list_data.push_back ( 5 );
//* method -2 to insert data;
// for (int i = 0; i < 5; i++){
//     cout<<"Enter the data : ";
//     cin>>i;
//     list_data.push_back(i);
// }

//* method -1 to display data;
// list<int> :: iterator iter;
// iter = list_data. begin(); //pointer the iter to the begin.
// cout<<*iter;
// iter++;
// cout<<*iter;
// iter++;
//* method -2 to display data using function;
// display(list_data);
// list_data.remove(23); //* Remove an item from the middle;
// list_data.pop_front();
// list_data.sort(); //Shorting the data in order;
display(list_data);
list2.push_back ( 23 );
list2.push_back ( 12 );
list2.push_back ( 4 );
list2.push_back ( 20 );
list2.push_back ( 56 );
list2.sort();
list2.reverse();
display(list2);
// list_data.merge(list2);
// display(list_data);
return 0;
}