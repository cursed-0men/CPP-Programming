#include<iostream>
using namespace std;
int main()
{
 int i, n;
 int count=0;
 // n = number 
 // i = factors
 cout<<"enter n = ";
 cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" is factor"<<endl;
            count++;
        }
    }
    if(count == 2){
      cout<<"a prime number";
    }
    else{
      cout<<"not a prime number";
    }
    return 0;
}