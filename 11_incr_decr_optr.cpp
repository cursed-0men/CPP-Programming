#include<iostream>
using namespace std;
int main(){
int i = 5, j; 

j = i++; // i++ ---> i=i+1 
cout<<i<<" "<<j<<endl;
    return 0;
} //output i = 6, j = 5
// first assignment to j then increment in i.
// If we write ++i then both will be 6 6.