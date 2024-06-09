// Accessing enum
#include<iostream>
using namespace std;
           
enum levels{
      LOW,
      MEDIUM,
      HIGH
};

// By default, the first item (LOW) has the value 0, the second (MEDIUM) has the value 1, etc.     
int main(){
      levels l1 = LOW;
      levels l2 = MEDIUM;
      levels l3 = HIGH;

cout<<l1<<" "<<l2<<" "<<l3<<endl;

           
return 0;
}