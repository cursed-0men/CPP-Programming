// sum of n natural numbers using loops
#include<iostream>
using namespace std;
int main(){

int n,i,sum = 0;
cout<<"enter n = ";
cin>>n;

for(i=1;i<=n;i++){
    sum += i;
    
}
cout<<"sum = "<<sum<<endl;
    return 0;
}