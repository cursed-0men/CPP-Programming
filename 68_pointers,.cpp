// eg.

// variable   :    x     p
// data       :   10    200(p=&x)...this data  is address of another variable x. so this points towards address of x, to access x.
// address    :   200   300

#include<iostream>
using namespace std;
int main()
{
 
 int x=10;
 int *p;
 p=&x;   // &x is address of x.

 
cout<<x;    // 10
cout<<&x;   // 200
cout<<p;    // 200
cout<<&p;   // 300
cout<<*p;   // 10
// data of location at where p is pointing.

    return 0;
}

// declaration     : int  *p;
// initialization  : p=&x;
// de-reference    : cout<<*p;  ... whenever pointer is pointing and accessing the data.


