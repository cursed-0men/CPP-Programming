//lec. 145
#include<iostream>
using namespace std;

int *fun(){
int *p = new int[5];
      for (int i = 0; i < 5; i++){
            p[i] = 5*i;
      }
return p;
}

int main(){

// function call
int *call = fun(); 
      for (int i = 0; i < 5; i++){
            cout<<call[i]<<endl;
      }        
return 0;
}