#include<iostream>
using namespace std;
int main()
{
int n,r; 
int sum = 0;
    cout<<"enter n = ";
    cin>>n;

while(n!=0){
    r=n%10;
    n=n/10;
    cout<<r<<endl;
    sum=sum+r;
}
 cout<<"sum = "<<sum;
    return 0;
}