// Printing ordered pairs using nested for loops.
#include<iostream>
using namespace std;
int main()
{
 
 for(int i = 1; i<=4; i++){     // i---> columns

    for(int j = 1; j<=3; j++){   // j---> rows
        cout<<"("<<i<<","<<j<<") ";
    }cout<<endl;
 }
 
    return 0;
}