// eg.
#include<iostream>
using namespace std;
int main()
{
 
 int a=10;
 int *p;
 p=&a;
 

 cout<<a<<endl;  //  10
 cout<<&a<<endl; //  add.a
 cout<<p<<endl;  //  add.a
 cout<<&p<<endl; //  add.p
 cout<<*p<<endl; //  10

 
    return 0;
}