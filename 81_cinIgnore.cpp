// using cin.get function both the times, with the help of cin.ignore function.



#include<iostream>
using namespace std;
int main()
{
  
   char s1[100];
 char s2[100];

// for s1.
    cout<<"enter name = ";
    cin.get(s1,100);
    cout<<"welcome, "<<s1<<endl;
 
cin.ignore(); //this will clear off \n or any ohter remaining characters.

// for s2.
    cout<<"enter name again = ";
    cin.get(s2,100);
    cout<<"welcome again, "<<s2<<endl;
  
     return 0;
}