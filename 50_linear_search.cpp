//  Linear search---> for finding location of element.
// eg. finding location of element in an array.
//
//  n=10
//  A---> 6 11 25 8 15 7 12 20 9 14 
//        0 1  2  3 4  5 6  7  8  9
// lets say we wish to find the location of key = 12--->successful(6) 
// lets say we wish to find the location of key = 35--->unsuccessful. KEY NOT FOUND.

// In this example we will be making an array by taking inputs from user for elements.

#include<iostream>
using namespace std;
int main()
{
 int i, A[4],n=4;
 int key;
 
 cout<<"enter elements = ";
 for (i = 0; i < n; i++)
 {
    cin>>A[i];
 }
cout<<"enter key = ";
cin>>key;
 for ( i = 0; i < n; i++)
 {
    if(key==A[i]){
        cout<<"key is found at = "<<i;
        return 0;
    }
 }
 cout<<"key not found!!";
 
    return 0;
}
