// function overloading
// same function with different arguments
#include<iostream>
using namespace std;

int sum(int a, int b){
      return a+b;
}

float sum(float a, float b){
      return a+b;
}

int sum(int a, int b, int c){
      return a+b+c;
}

int main(){
      cout<<sum(10,5)<<endl;
      cout<<sum(1,2,3)<<endl;
      cout<<sum(11.5f,10.5f)<<endl;
      // we have to write "f" with arguments that we are passing, elseit will show error
           
return 0;
}