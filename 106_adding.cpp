// adding 2 numbers

#include<iostream>
using namespace std;

int add(int a, int b){
      return a+b;
}


int main(){
           
int p,q;
cout<<"p,q = ";
cin>>p>>q;

int result = add(p, q);
cout<<result;


return 0;
}