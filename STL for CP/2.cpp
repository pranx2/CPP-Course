#include<bits/stdc++.h>
using namespace std;
/**
 * Template declaration for a function or class with two template parameters.
 *
 * @tparam t1 The first template parameter.
 * @tparam t2 The second template parameter.
 */
template <class t1, class t2>
class obj{
    public :
        t1 data1;
        t2 data2;
         obj ( t1 x_data, t2 y_data){
            data1 = x_data;
            data2 = y_data;
         }
        void display ( void ){
            cout<<data1 <<endl<< data2 << endl;
        }
};
int main(){
    obj<int, int> test(69,96);
    // obj<char, char> test('p', 'p');
    // obj<float, float> test(96.34, 34.545);
    test.display();
return 0;
}