// To check for ANGSTROM numbers.
#include<iostream>
using namespace std;
int main()
{
 
 int n,r,sum = 0,m;
 
 cout<<"enter n = ";
 cin>>n;
 m=n; // because in case of angstrom number...the entered number and the sum after performing operation shall be equal.
 
while(n>0){
r=n%10; // for keeping the digits individually.
n=n/10; // for keeping the digits individually.
sum = sum+(r*r*r); // operation to be done on digits that are separated individually.
}
if(sum==m){
  cout<<"number is ANGSTROM";
}
else{
  cout<<"number is NOT ANGSTROM";
}

    return 0;
}


