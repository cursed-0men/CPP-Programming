// copying string into character array

// s.copy(destination_Array, number_of_characters)

#include<iostream>
#include<string>
using namespace std;
int main(){

      string s = "welcome";
      char arr[10]; // destination array

      s.copy(arr,3);
      // null terminating char was not inserted so,
      // it shows trash values beside output
      arr[3] = '\0';
      cout<<arr<<endl;

 
           
return 0;
}