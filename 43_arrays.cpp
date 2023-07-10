/*---ARRAYS---*/
// declaration:
// int A[5];
// float A[5];
// char A[2]={'a','b'};



// NOTE::

// if 
// int A[5]={2,4};     then
// 2 4 0 0 0 
// 0 1 2 3 4

// if 
// int A[]={1,2,3,4};    then
// 1 2 3 4
// 0 1 2 3  



// Eg. Printing some numbers from an array.
#include<iostream>
using namespace std;
int main(){
 int A[5]={5,10,15,20,25};
cout<<A[0]<<endl;
cout<<A[1]<<endl;

cout<<A[3];

    return 0 ;
}