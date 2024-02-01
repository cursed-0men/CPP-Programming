// string class functions continued...
// str.append("some text") -> adding string at end

#include<iostream>
#include<string>
using namespace std;
int main(){

string s1 = "hello";
cout<<s1.capacity()<<endl;
s1.append(", how are you");


cout<<s1<<endl;
cout<<s1.capacity()<<endl; // capacity after appending will be changed.
cout<<"length = "<<s1.length()<<endl;
return 0;
}
