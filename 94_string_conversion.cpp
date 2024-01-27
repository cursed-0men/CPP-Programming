// converting string to various datatypes.

// 1. strtol(str1,NULL,base) ==> string to long int
// 2. strtof(str1,NULL) ==> string to float

// base of number system

#include<iostream>
#include<cstring>
using namespace std;
int main(){

      char s1[10] = "125";// convert to long int.
      long int x = strtol(s1,NULL,10);
      cout<<x<<endl; // 125

      char s2[10] = "12.3";// convert to float.
      float y = strtof(s2,NULL);
      cout<<y<<endl; // 12.3       
           
return 0;
}