// GCD of 2 numebrs.
#include<iostream>
using namespace std;
int main()
{
 
 int m,n;
 cout<<"enter m, n = ";
 cin>>m>>n;

 while(m!=n){

if(m>n){
    m=m-n;
}

else if(n>m){
n=n-m;
}
 }
 cout<<" GCD = "<<m;
    return 0;
}