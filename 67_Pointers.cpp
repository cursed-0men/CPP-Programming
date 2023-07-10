/*----- POINTERS -----*/

// variables used for storing the data.
// variables of 2 types...

// 1. data variable     : used for storing data.
// 2. address variable  : used for storing address.

//eg.

#include<iostream>
using namespace std;
int main()
{
 
 int x=10;   // data variable.

int *p;    // address variable.
p=&x;    //pointing on location of x.

    return 0;
}
