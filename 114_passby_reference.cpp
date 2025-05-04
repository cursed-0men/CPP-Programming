// pass by reference
// when we call that function, the whole function is inserted in main function internally
// this kind of functions are called inline functions
#include<iostream>
using namespace std;

void Swap(int &a, int &b){
      int temp;
      temp = a;
      a = b;
      b = a;
}

int main(){
int x = 10;
int y = 20;

swap(x,y);
cout<<x<<" "<<y;
           
           
return 0;
}