// default argument



#include<iostream>
using namespace std;

int sum(int a, int b, int c = 0){
      return a+b+c;
}

int main(){
      cout<<sum(10,5)<<endl;
      cout<<sum(10,1,1)<<endl;
      // c = 0 is default argument
      // i.e if we pass the parameter exclusively, then it will update c
      // else it'll remain c = 0.
           
return 0;
}