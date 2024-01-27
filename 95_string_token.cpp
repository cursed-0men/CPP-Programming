// string token : tokenizes a string, based on symbols used

// strtok(str1,"=;")

// string like :
// x=10;y=20;z=35

// NOTE : in above string, tokens are x,10,y,20,z,35.
// tokens are all individuals

#include<iostream>
#include<cstring>
using namespace std;
int main(){

char s1[20] = "x=10;y=20;z=35";

//cout<<strtok(s1,"=;")<<endl; // will print x
// but we want x = 10; y = 20...
// for that

char *token  = strtok(s1,"=;");
      while (token != NULL)
      {
            cout<<token<<endl;
            token = strtok(NULL,"=;");
      }
      
      // if we remove "=" from parameters.
      // then output will be : 
      // x = 10
      // y = 20
      // z = 35

      // x = 10 will br treated as one token, same for all
           
return 0;
}
