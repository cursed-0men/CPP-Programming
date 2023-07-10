// printing 2d star pattern using nested for loops
#include<iostream>
using namespace std;
int main()
{
 
 for(int i = 1; i<=5; i++){    // i---> columns
    for(int j = 1; j<=5;j++){ // j---> rows
        cout<<"* ";
    }
cout<<endl;   // because nested for loop represents a single line


 }
 
    return 0;
}