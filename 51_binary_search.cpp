#include<iostream>
using namespace std;
int main()
{
 int A[5]={0,2,5,8,7};
 int l=0, h = 4, n = 5;
 int key,mid;

 cout<<"enter key = ";
 cin>>key;

 while(l<=h){
 mid = (l+h)/2;
 if(key==A[mid]){
    cout<<"key found at = "<<mid;
    return 0;
 }
else if(key<A[mid]){
    h=mid-1;
}
else {
l = mid+1;
}
 }
 cout<<"key not found";
    return 0;
}