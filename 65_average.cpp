// write a program for calculating the average of all elements in an array.



#include<iostream>
using namespace std;
int main()
{
 int n,i;
 float a[100],sum=0, avg;

 cout<<"enter n(0-100)= ";
 cin>>n;


 for(i=0; i<n; i++){
    cout<<"enter number = ";
    cin>>a[i];
    sum+=a[i];
 }
 cout<<"sum = "<<sum<<endl;
 avg=sum/n;

 cout<<"average = "<<avg;
 
    return 0;
}
 