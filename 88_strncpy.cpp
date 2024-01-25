// strncpy
// strncpy(destination,source,constant)

#include<iostream>
#include<cstring>
using namespace std;
int main(){

char s1[10] = "hello";
char s2[10] = "";

      strncpy(s2,s1,4);

         cout<<s1<<endl;// hello
         cout<<s2<<endl;// hell

return 0;
}