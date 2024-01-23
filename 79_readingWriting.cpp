// READING AND PRINTING STRING from keyboard.

#include<iostream>
using namespace std;
int main()
{
 
char s[20];
    cout<<"etner name = ";
cin>>s;
    cout<<"Welcome, "<<s;
// this would ony work for single name.


//cin.getline(s,20);
// OR
//cin.get(s,20)
// either of above line will work for full name.

// use getline more.
    return 0;
}