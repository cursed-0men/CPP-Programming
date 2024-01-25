// strchr
// used for finding occurance of given character(from RHS) in a string

#include<iostream>
#include<cstring>
using namespace std;
int main(){

char s1[15] = "programming";
      
      cout<<strrchr(s1,'r')<<endl; // ramming
      cout<<strrchr(s1,'m')<<endl; // ming    
           
return 0;
}