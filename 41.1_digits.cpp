#include<iostream>
using namespace std;
int main()
{
 
 int n,digit; 
 cout<<"enter n = ";
 cin>>n;

 while(n>0){

    digit = n%10;
    n = n/10;
    cout<<digit<<" "<<endl;
 }

    return 0;
}