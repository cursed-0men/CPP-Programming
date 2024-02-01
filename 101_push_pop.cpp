// str.push_back("single alphabet") -> adds single alphabet at end of string
// str.pop_back() -> removes single alphabet from end of string

#include<iostream>
#include<string>
using namespace std;
int main(){

string s = "helloo";
cout<<s<<endl;

s.push_back('z');
cout<<s<<endl; // hellooz

s.pop_back();
cout<<s<<endl; // helloo

return 0;
}
