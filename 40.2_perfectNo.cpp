#include<iostream>
using namespace std;
int main()
{
  int i, n;
  int sum = 0; 
 // n = number 
 // i = factors
 cout<<"enter n = ";
 cin>>n;

    for(i=1; i<=n; i++){
        if(n%i==0){
          sum = sum+i; 
            cout<<i<<" is factor"<<endl;
            
        }
        
    }
    cout<<"sum of factors = "<<sum<<endl;
    if(sum==2*n){
      cout<<n<<" is perfect number";
    }
    else{
      cout<<n<<" is not a perfect number";
    }
    return 0;
}