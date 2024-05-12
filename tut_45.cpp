/**
 * Demonstrates the use of pointers and dynamic memory allocation.
 *
 * @returns 0 upon successful execution.
 */
#include<iostream>
using namespace std;
int main(){
int a = 4;
int *ptr = &a;
cout<<"value of pointer is : "<<*(ptr)<<endl;
float *P = new float (400);
cout<<*(P)<<endl;


/**
 * Dynamically allocates an integer array of size 4.
 *
 * @returns A pointer to the first element of the allocated array.
 */
int* arr  = new int[4];
arr[0] = 0;
arr[1] = 1;
arr[2] = 2;
arr[3] = 3;
/**
 * Deallocates memory allocated for an array.
 *
 * @param arr Pointer to the array to be deallocated.
 *
 * @returns None
 */
delete [] arr;
cout<<"arr[0] = "<<arr[0]<<endl;
cout<<"arr[1] = "<<arr[1]<<endl;
cout<<"arr[2] = "<<arr[2]<<endl;
cout<<"arr[3] = "<<arr[3]<<endl;

return 0;
}