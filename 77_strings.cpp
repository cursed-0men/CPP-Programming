/*---  STRINGS  ---*/
// String is a collection of characters.

// There are 2 methods of representing a string.
// 1. Using character array. i.e array of characters.
// 2. class string.


// declaring and initializing a string.
#include<iostream>
using namespace std;
int main()
{
 // 1.
    char x='A'; // character delaration and intitalization.
                // can store only single letter.
                // single quotations for character constants.

// 2.
    char S[10]="hello"; // for storing string we must take an character array.
                        // double quotations for string constants.
                        // here "hello" is string literal/costant. 

                        //  h  e  l  l  o  \0(null char)
                        //  0  1  2  3  4        5          6  7  8  9
                        // also called string terminator / delimator.

// 3.
    char Q[]="Hello";   //  H  e  l  l  o  \0
                        //  0  1  2  3  4   5
                        // Size of an array will be according to the string.

// 4.
    char s[]={'h','e','l','l','o','\0'};    // initializing the character array.
                                            // inclusion of \0(null character) makes it a string.

// 5.
    char a[]={65,66,67,68,'/0'};    // using ASCII codes for characters. Rest is same as above.
                                    // inclusion of \0(null character) makes it a string.
      
// 6. USING POINTER WE CAN CREATE STRING.

char *p = "HELLO";      // Creating an array, and p is a pointer that will be pointing onto that string.


// for HEAP use: char *p;
// for STACK use: char p[10];

    return 0;                               
 }
