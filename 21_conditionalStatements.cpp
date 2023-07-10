// check if entered number is +ve or -ve or zero
#include<iostream>
using namespace std;
int main(){
int x;
cout<<"enter x=";
cin>>x;


if (x>0)
{
    cout<<"Positive";
}

else{
    if(x<0){
    cout<<"Negative";
    }

else{
    cout<<"zero";
}
}

    return 0;
} 