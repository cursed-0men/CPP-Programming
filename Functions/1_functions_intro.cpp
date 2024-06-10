// FUNCTIONS
// Methods to perform specific task.
// Can be called anytime to avoid write code again and again


// Call By pointer/address
#include<iostream>
using namespace std;
           
void swap(int *a, int *b){
      int temp = *a;
      *a = *b;
      *b = temp;
}
           
int main(){

int x,y;

cout<<"X = ";
cin>>x;

cout<<"Y = ";
cin>>y;

cout<<"INITIAL..."<<endl;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;

swap(&x,&y);

cout<<"FINAL..."<<endl;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y;

           
return 0;
}