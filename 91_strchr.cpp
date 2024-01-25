// strchr
// used for finding occurance of given character(from LHS) in a string
// similar to strstr, but this is character specific and "strstr" is for string specific.


// declaration:
// strchr(main,char);

#include<iostream>
#include<cstring>
using namespace std;
int main(){

char s1[15] = "programming";
      
      cout<<strchr(s1,'r')<<endl; // rogramming 
      cout<<strchr(s1,'m')<<endl; // mming 

      
           
return 0;
}