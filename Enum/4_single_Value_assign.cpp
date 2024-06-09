
// Assigning value to only one of the element
// Next value becomes consecutive
#include<iostream>
using namespace std;

enum day{
      mon,
      tue = 5,
      wed,
      thu,
      fri
};  
           
           
int main(){
day d1,d2,d3,d4,d5;
d1 = mon;
d2 = tue;
d3 = wed;
d4 = thu;
d5 = fri;     

cout<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<" "<<d5<<endl;

return 0;
}