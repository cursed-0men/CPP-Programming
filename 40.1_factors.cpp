#include<iostream>
using namespace std;
int main()
{
 int i, n;
 // n = number 
 // i = factors
 cout<<"enter n = ";
 cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" is factor"<<endl;
        }
    }
    return 0;
}