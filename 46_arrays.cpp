// Eg.
#include<iostream>
using namespace std;
int main(){

int A[]={3,2,1,6,5,4,9,8,7};

for (int x:A){     // if we write auto instead of int, even then result will be same...but we need not to know the type of array.  
       // x:A---> x belongs to A.
    cout<<x<<endl;
}

    return 0;
}