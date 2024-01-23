// CONCATENATION.

// declaration:
// strcat(destination,source);

//Eg.
//  destination: g  o  o  d  \0
//  indices:     0  1  2  3   4  
//
//  source:   m  o  r  n  i  n  g  \0
//  indices:  0  1  2  3  4  5  6   7

// 
// answer:
// g o o d m o r n i n g \0
// 0 1 2 3 4 5 6 7 8 9 10 11
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 char s1[20]="good";
 char s2[20]=" morning";

 strcat(s1,s2); //s2(source) will be attached to s1(destination).
 cout<<s1<<endl; // output: good morning
 cout<<s2<<endl; // output: morning
 
    return 0;
}
