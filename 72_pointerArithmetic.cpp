// POINTER ARITHMETIC.
// 5 arithmetic operations are allowed on pointers.

// 1.p++; 
// This won't add 1 to the address, but it will move forward to other address by 1.

// 2.p--;
// It will move backward to other address by 1.

// 3.p=p+(any constant);

// 4.p=p-(any constant);

// 5.d(any variable) = q-p;
// Here q is any other pointer.

#include<iostream>
using namespace std;
int main()
{
 
 int a[5]={2,4,6,8,10};
 int *p;
 p=a; // it will store base address in p. it will be address of first element 2.
 p++;

 int *s;
 s=&a[1]; //this will store address of element 4 in s.

 int *q;
 q=&a[3]; // this will store address of element 8 in q.

cout<<p<<endl
cout<<s<<endl;
cout<<q<<endl;

 // NOTE : output of p and s will be the same, as above we did "p++".
 
    return 0;
}
