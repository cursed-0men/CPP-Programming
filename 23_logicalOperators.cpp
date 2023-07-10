/*---LOGICAL OPERATORS---*/
// used for checking more than one condition simultaneously.
// also called compound conditional statements.

// &&(AND)

// ||(OR)

// !(NOT)



//Eg. Checking if working hours or leisure hours.
// Hint: generally it is 9-5 job...so working hours is between 9-17(in 24hr clock)

#include<iostream>
using namespace std;
int main(){
int h;
cout<<"enter hour = ";
cin>>h;

if (h>=9 && h<=17) 
{
    cout<<"working hour";
}

else{
    cout<<"leisure hour";
}
    return 0;
}
