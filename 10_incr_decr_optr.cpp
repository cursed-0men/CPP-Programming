 /*-----Increment/Decrement operator-----*/
// 1. increment = pre increment(++x), post increment(x++)
// 2. decrement = pre decrement(--x), post decrement(x--)

#include<iostream>
using namespace std;
int main(){
int i = 5;
i++;// if we write "++i" then also output will be same
cout<<"new value = "<<i;
    return 0;
}