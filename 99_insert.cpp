// str.insert(index,"text") -> insert given string at given index
// str.insert(index, "text", n(constant)) -> insert first nth letters at a given index

#include<iostream>
#include<string>
using namespace std;
int main(){

string s1 = "hllo";
cout<<s1<<endl;// prints hllo


s1.insert(1,"e");
cout<<s1<<endl; // prints hello

s1.insert(1,"elll",2);
cout<<s1<<endl;  // prints helello  

cout<<"length = "<<s1.length()<<endl; // 7
return 0;
}
