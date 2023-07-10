// 2D Array.

#include<iostream>
using namespace std;
int main()
{
 int A[3][4];    // declaration.

 A[1][2]=15;
 
    return 0;
}


/*

it will create a 2d matrix like this...

    0    1    2    3
0             |
              |
1-------------15

2

if we wish to write 15 at this position then in code we write it as mentioned in line 9.
*/

// locations are allocated contigously side by side.