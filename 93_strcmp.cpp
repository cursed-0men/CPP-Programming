// strcmp
// used to compare 2 string in dictionary order.

// declaraion:
// strcmp(str1, str2);

// if str1 comes first in dictionary(i.e is smaller), it will return -ve value.
// if str1 = str2, it will return 0.
// if str1 comes second in dictionary(i.e is larger), it will return +ve value.

// NOTE : 
// first to be appearing in dictionary is smaller
// second to be appearing in dictionary is larger

// NOTE : UPPERCASE is smaller than lowercase.

//Eg. :
// apple 
// banana
// here apple is smaller

#include<iostream>
#include<cstring>
using namespace std;
int main(){

      char s1[10] = "apple";
      char s2[10] = "banana";
      cout<<strcmp(s1,s2)<<endl; // -1 

      char s3[10] = "apple";
      char s4[10] = "Apple";
      cout<<strcmp(s3,s4)<<endl; // 1          


return 0;
}