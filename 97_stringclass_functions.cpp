// Functions of string class

// here "str" is string object name

// we are calling functions on object itself

// str.length(); -> length of string
// str.size(); -> same as above
// str.capacity(); -> shows size of whole array created for storing string.
// str.resize(constant); -> to change capacity.
// str.max_size(); -> possible max size we can have
// srr.clear() -> will clear the content of string
// str.empty() -> determing whether string is empty or not

#include<iostream>
#include<string>
using namespace std;
int main(){
           
string s1 = "hello";

cout<<s1.length()<<endl<<s1.size()<<endl<<s1.capacity()<<endl;
cout<<s1.max_size()<<endl;

s1.clear();
cout<<s1<<endl; // prints nothing

cout<<s1.empty()<<endl; // will print "1" -> yes




return 0;
}