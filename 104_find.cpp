// finding base index of a string/char in main string

// s.find(str)
// OR
// s.find(char)

#include<iostream>
#include<string>
using namespace std;
int main(){

string str = "hello there";

// finding index of string
cout<<str.find("there")<<endl; 
           
cout<<str.find("ll")<<endl;

return 0;
}