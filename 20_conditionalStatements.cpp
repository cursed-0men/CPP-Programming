/*---CONDITIONAL STATEMENTS---*/
// Finding maximum of two numbers or equal
#include<iostream>
using namespace std;
int main()
{

int x,y;
cout<<"enter x = ";
cin>>x;
cout<<"enter y = ";
cin>>y;
if(x>y){
    cout<<"x is max";
}

else{
    if(y>x)
    {
        cout<<"y is max";
}
else{
    cout<<"both are equal";
}
}
    return 0;
}
