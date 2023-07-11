// REFERENCE
// generally used in different functions.
// it does not consume any space.
#include<iostream>
using namespace std;
int main()
{
 
 int x=10;
 int &y = x; // we must initialize it while declaring it, else it will throw error.
  // reference for x.
  // here x became equal to y. i.e they became one element.
  // y is just another name for x.

        cout<<x<<endl; // 10.
        y++;
        
        x++;
        cout<<x<<endl; // 12.

 cout<<&x<<" "<<&y; // same address.
 
    return 0;
}