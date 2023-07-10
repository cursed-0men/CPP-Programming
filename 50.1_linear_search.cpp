// linear search in given array.

#include<iostream>
using namespace std;
int main()
{
 
 int a[8]={5,4,2,3,6,8,1,9};
 int key;
 
cout<<"enter key = ";
cin>>key;

for(int i = 0; i<8; i++){
    if(key==a[i]){
        cout<<"key is found at = "<<i;
        return 0;
    }
}
 cout<<"key not found";
    return 0;
}