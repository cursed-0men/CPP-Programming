// Overflow
#include<iostream>
using namespace std;
int main(){

char x = 127;
++x;// Also x++
cout<<"new value = "<<(int)x;
    return 0;
}