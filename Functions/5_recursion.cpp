// Recursive functions
// Functions calling itself

// NON-RECURSIVE

// #include<iostream>
// using namespace std;
           
// int factorial(int n){
//       int product = 1;
//       if(n == 0 | n == 1){
//             return 1;
//       }
//       else{
//             for(int i = n; i > 0; i--){
//                   product *= i;
//             }
//       }
// }           
           
// int main(){
// int a;
// cout<<"a = ";
// cin>>a;

// int result = factorial(a);
// cout<<result;
           
// return 0;
// }


// RECURSIVE FUNCTION

#include<iostream>
using namespace std;
           
int factorial(int n){
      if(n==0 | n==1){
            return 1;
      }
      else{
            return n * factorial(n-1);
      }
}     
           
int main(){
int a;
cout<<"a = ";
cin>>a;

int result = factorial(a);
cout<<result;
           
return 0;
}

