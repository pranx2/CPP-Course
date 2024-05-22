#include<bits/stdc++.h>
using namespace std;
/**
 * Template declaration with default template arguments.
 *
 * @tparam T1 The first template parameter (default: float).
 * @tparam T2 The second template parameter (default: float).
 * @tparam T3 The third template parameter (default: int).
 */
template <class T1 = float, class T2=float, class T3=int>
class data{
    public :
     T1 data1;
     T2 data2;
     T3 data3;
    data( T1 a, T2 b, T3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printScreen (void){
        cout<<data1<<endl;
        cout<<data2<<endl;
        cout<<data3<<endl;
    }
};
int main(){
    // data<char, int,float> test('A', 7, 9.55);
    data<> test(56.7, 67.5,200);
    test.printScreen();
return 0;
}