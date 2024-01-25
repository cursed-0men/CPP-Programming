// strncat()

// declaration:
// strncat(destination,source,constant/literal)
// it will attach only selected number of source characters to destination characters.


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 
 char s1[100]="hello";
 char s2[100]="world";

 strncat(s1,s2,4);

 cout<<s1<<endl; //helloworl
 cout<<s2<<endl; //world
 
    return 0;
}
