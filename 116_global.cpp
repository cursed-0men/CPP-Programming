// global vs local variables
// Global : variables which are outside of all the functions and are accessible to all.
// as long as the program is runnning, the global variables are in the memory
// unlike local variables

#include<iostream>
using namespace std;

int g = 5; //global variable

void fun(){
      int a = 10;
      a++;
      g++;
      cout<<a<<" "<<g<<endl;
}

int main(){

      cout<<endl<<g<<endl; 
      fun();
      cout<<endl<<g<<endl;    
           
return 0;
}