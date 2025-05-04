// parameter passing methods

// 1. Pass by value
// 2. Pass by Address
// 3. Pass by Reference

// Eg. Pass/Call by value(should be used in func. with a return type)
#include<iostream>
using namespace std;

void swap(int a, int b){
      int temp;
      temp = a;
      a = b;
      b = temp;
}

int main(){

      int x = 10;
      int y = 20;
      swap(x,y);
      cout<<x<<" "<<y<<endl;
      // formal parameters will be swapped, actual parameters(arguments) will not be swapped.
      // swapping won't occur.          
return 0;
}