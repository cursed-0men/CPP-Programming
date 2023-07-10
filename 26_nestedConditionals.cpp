// max of 3 numbers
#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter a,b,c = ";
cin>>a>>b>>c;

if (a>b && a>c) 
{
    cout<<"a";
}

else{
    if(b>c){
        cout<<"b";
    }
    else{
        cout<<"c";
    }
}
    return 0;
}