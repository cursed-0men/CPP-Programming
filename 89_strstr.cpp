// strstr
// used for finding substring from main string.

// declaration : 
// strstr(main,sub);

// Eg.
// main --> programming
// substring --> gram


#include<iostream>
#include<cstring>
using namespace std;
int main(){
           
      char s1[15] = "programming";
      char s2[10] = "gram";
      
      cout<<strstr(s1,s2)<<endl; // gramming
      // it will print from starting of s2 till end of main string.


      //cout<<s1<<endl;
      //cout<<s2<<endl;
           
return 0;
}
