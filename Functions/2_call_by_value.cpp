// Call by Value

#include<iostream>
using namespace std;
           
int sum(int a, int b){
      return a+b;
}          
           
int main(){

int a,b;
cout<<"a = ";
cin>>a;

cout<<"b = ";
cin>>b;

int result = sum(a,b);
cout<<"Sum = "<<result;

           
return 0;
}