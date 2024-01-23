// using getline.
#include<iostream>
using namespace std;
int main()
{
 
 char s1[100];
 char s2[100];

// for s1.
    cout<<"enter name = ";
    cin.getline(s1,100);
    cout<<"welcome, "<<s1<<endl;
 
// for s2.
    cout<<"enter name again = ";
    cin.get(s2,100);
    cout<<"welcome again, "<<s2<<endl;
 

// NOTE:
// this whole thing won't work if we use cin.get in both.

// because the enter we pressed will not be taken by 1st function but it will be taken by next function. so it shows welcome without taking the input 2nd time.

// this will work if we use cin.getline in both and if we use getline for 1st and cin.get for second. 


    return 0;
}

// NOTE::::
// if we use string class then the syntax would change for getline function...
// it'll be::

// getline(cin,string-variable)