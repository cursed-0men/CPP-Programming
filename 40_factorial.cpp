// find factorial of number using any loop.
#include<iostream>
using namespace std;
int main(){

int n,i,pro = 1;
cout<<"enter n = ";
cin>>n;

for(i=1;i<=n;i++){
    pro *= i;
    
}
cout<<"Factorial = "<<pro<<endl;
    return 0;
}