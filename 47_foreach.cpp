/*---For each loop---*/
//SYNTAX:

//   for(int x:A)
//   {
//    cout<<x;    
//      }
//
#include<iostream>
using namespace std;
int main(){

int A[]={3,2,1,6,5,4,9,8,7};

for (int x:A){     
    cout<<++x<<endl; // will print array with 1 added in each element.
}
    // we can also type "auto" instead of "int" in for loop's paranthesis.
    for(auto x:A){
    cout<<x<<endl;
    }

    return 0;
}
