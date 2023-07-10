#include<iostream>
using namespace std;
int main()
{
int rev=0;
int n,r;
// n = number
// r = remainder

cout<<"enter n = ";
cin>>n;
while (n>0)
{
  r=n%10; // To keep the digits individual in reverse order
  n=n/10; // To keep the digits individual in reverse order
  rev = (rev*10) + r;
 
}
cout<<rev;
  return 0;
}