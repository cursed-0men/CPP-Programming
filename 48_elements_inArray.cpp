// Addition of all elements in an array
#include<iostream>
using namespace std;
int main(){

int A[7]={4,8,6,9,5,2,7};
int sum = 0;

for(int x:A){
    sum+=x;
    
}
cout<<"sum = "<<sum;

    return 0;
}