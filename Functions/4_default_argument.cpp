// Default argument
// Default arguments are those values which are used by the function if we don’t input our value as parameter.


#include<iostream>
using namespace std;
           
int sum(int a, int b = 5){
      return a+b;
}          
           
int main(){
    
    int result = sum(10);
    cout<<result;       
   
return 0;
}
// OUTPUT : 15
