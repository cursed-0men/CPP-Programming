/*--- DO WHILE LOOP ---*/
// Syntax:
//  do
//  {
//    process
//    }
//  while(condition)
#include<iostream>
using namespace std;
int main(){

int n,i=1;
cout<<"enter n = ";
cin>>n;
do{
cout<<"\n"<<i;
i++;
}while(i<=n);

    return 0;
}