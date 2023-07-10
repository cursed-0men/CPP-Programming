// Displacement using (v*v - u*u)/2*a
#include<iostream>
#include<cmath>
using namespace std;
int main(){

float u,v,a;
cout<<"enter u,v,a = ";
cin>>u>>v>>a;

cout<<"Displacement = "<<(v*v-u*u)/(2*a);


    return 0;
}