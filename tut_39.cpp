#include<iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
   if (ch >= 'a' && ch <= 'z'){
      cout<<"ALPHA"<<endl<<"IS SMALL"<<endl;
   }
   else if (ch >= 'A' && ch <= 'Z')
      cout<<"ALPHA"<<endl<<"IS CAPITAL"<<endl;
}
else cout<<"IS DIGIT"<<endl;
return 0;
} 