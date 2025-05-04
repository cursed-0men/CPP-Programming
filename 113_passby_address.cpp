// pass by address


// variables used for storing addresses -> pointer variables
#include<iostream>
using namespace std;

void Swap(int *a, int *b){ // formal parameters
      int temp;
      temp = *a;
      *a = *b;
      *b = temp;
}

int main(){
      int x = 10;
      int y = 20;
      Swap(&x,&y);// actual parameters
      cout<<x<<" "<<y;               
return 0;
}