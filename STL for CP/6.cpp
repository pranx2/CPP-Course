#include<bits/stdc++.h>
using namespace std;
int main(){
 map<string, int> marks;
 marks["PRANTO"] = 60;
 marks["PRITOM"]  = 30;
 map<string, int> :: iterator iter;
 for(iter = marks.begin(); iter != marks.end(); iter++){
    cout<<(*iter).first<<" = "<<(*iter).second<<endl; //* Outputs the key-value pair stored in an iterator to the standard output stream.
    }
 marks.insert({{"SUSME", 87}, {"NIKO", 69}});
for(iter = marks.begin(); iter != marks.end(); iter++){
    cout<<(*iter).first<<" = "<<(*iter).second<<endl; //* Outputs the key-value pair stored in an iterator to the standard output stream.
}
 cout<<marks.max_size()<<endl;
 cout<<marks.size()<<endl;
 cout<<marks.empty()<<endl;
return 0;
}