
#include<iostream>
using namespace std;
int main(){
int a=10,b=5;

if(true){
int c=a+b;
cout<<c;
}
cout<<c;//* error:undeclared variable

    return 0;
}
// if we use c variable outside the if statement then it will show error* necause c variable is decalred inside if statement.