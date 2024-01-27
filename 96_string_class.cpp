// string class
// built-in class in C++


// #include <string>
// string str; 
// cin>>str;
// getline(cin,str);

// <string> -> class
// string str; -> declaration of string variable 
// str -> object(of type string)

#include<iostream>
#include<string>
using namespace std;
int main(){

      string str;
      cout<<"Enter string = ";
      //cin>>str;// for displaying one word
      getline(cin,str); // for displaying multiple words
      cout<<str;
           
return 0;
}