#include<iostream>
using namespace std;
int main()
{
 
//  char s[10]="Hello";        //we can also do it wihtout mentioning the size.
//  cout<<s<<endl;
//  cout<<s[4]<<endl;
//output: Hello


// char s[]={'H','e','l','l','o','\0',}; 
// if we add characters after \0 then it will not show. 
// we can also mention the size >= 6. IF WE WISH.
// cout<<s;
// output: Hello
 
// char s[]={65,66,67,68,'\0'};
// output: ABCD
// we can also use 0 instead of null char(\0).
// we cna mention the size of array, if we wish.
// cout<<s;

// char *p = "hello";
// cout<<p;    // forbidden conversion.


// using string class
string s = "HELLO";
cout<<s;
// Output: HELLO

    return 0;
}

