// continued...

// finding max of 3 numbers

#include<iostream>
using namespace std;

int max(int a = 0, int b = 0, int c = 0){  // making all parameters default
      if(a > b && a > c){
            return a;
      }
      else if (b > c){
            return b;
      }
      else{
            return c;
      }
}

int main(){
      cout<<max()<<endl;
      cout<<max(10)<<endl;
      cout<<max(10,20)<<endl;
      cout<<max(10,120,200)<<endl;
      // single function is acting as 4 different overloaded functions
      // we should make arguments default in left to right manner.
           
return 0;
}
// resume from 3.35 lec. 139