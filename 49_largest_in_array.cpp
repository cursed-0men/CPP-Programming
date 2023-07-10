// for finding the largest element in array
// given array {4,8,6,9,5,2,7}
// we have to check for each element in given array



//  i    A[i]     max(if A[i]>maximum then A[i] will become the max element.)
//  0     4        4
//  1     8        8
//  2     6        8
//  3     9        9
//  4     5        9
//  5     2        9
//  6     7        9
#include<iostream>
using namespace std;
int main()
{
int A[7]={4,8,6,9,5,2,7};
int n = 7,max;
max = A[0]; // assuming and assigning the maximum element As A[0].
for(int i = 1;i<7; i++){
    if(A[i]>max){   // checking i from 1 to 6 for new max element.
        max = A[i]; // updating and assigning the new maximum element to variable max
    }
}
cout<<"max element = "<<max;
    return 0;
}



