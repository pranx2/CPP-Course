#include<bits/stdc++.h>
using namespace std;
/* 
!If you use vector in class it will be ambiguous  cz int bits/stdc++.h [vector] is a built in function.
?->    edit: it takes 45 minutes to found out the error or Ambiguous :) 
 */
template <class T>
class vectors{
    public :
        T *arr;
        int size;
        vectors(int s){
            size = s;
            arr = new T[size];
        }
        T doProduct(vectors &v){
            T d = 0;
            for (int i = 0; i < size; i++){
                d += this-> arr[i] * v.arr[i];
            }
            return d;
        }
};
int main(){
   vectors<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vectors<int> v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 3;
    v2.arr[2] = 1;
    int  a = v1.doProduct(v2);
    cout<<a;
return 0;
}