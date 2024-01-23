#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 // an array must be created to initialize a pointer character.
 // Storing it in HEAP memory.

 char *s= new char[100];
 // STRING/POINTER MUST BE INITIALIZED!!!!!


    cout<<"enter string = ";
    // for single words.
    //cin>>s;
    
    // for multiple words.
    cin.getline(s,100);
cout<<"length = "<<strlen(s)<<endl;

 
    return 0;
}