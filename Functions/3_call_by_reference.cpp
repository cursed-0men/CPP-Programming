// Call by reference


#include<iostream>
using namespace std;
           
void swap(int &a, int &b){
      int temp = a;
      a = b;
      b = temp;
}
           
int main(){
int a = 5;
int b = 11;

cout<<a<<endl<<b<<endl;
swap(a,b);
cout<<a<<endl<<b;



return 0;
}