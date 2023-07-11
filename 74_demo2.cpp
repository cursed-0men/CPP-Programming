// pointer arithmetic.

#include<iostream>
using namespace std;
int main()
{
 
 int a[5]={2,4,7,8,10};
 int *p = a;
 int *q=&a[4];

cout<<q-p<<endl;
cout<<p-q<<endl;
 
 
 
    return 0;
}