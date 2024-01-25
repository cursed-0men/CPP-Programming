// substring condition
// tro print null when substring can't be created

#include<iostream>
#include<cstring>
using namespace std;
int main(){
           
      char s1[15] = "programming";
      char s2[10] = "k";
      
      if(strstr(s1,s2)!=NULL){
      cout<<strstr(s1,s2)<<endl;
      }

      else{
            cout<<"not found"<<endl;
      }

      // it will print "not found".
           
return 0;
}