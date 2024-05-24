#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {1,3,55, 22,500,34,2,45};
sort(arr, arr+8,greater<int>()); // sort the array in order...//greater means big to small..
for (int i = 0; i < 8; i++){
    cout<<arr[i]<<endl;
}

return 0;
}