/*-----Dynaminc Allocation.-----*/

// #include<iostream>
// using namespace std;
// int main()
// {
 
//  int *p;
//  p = new int[5];

//     p[0]=12;
//     p[1]=13;

//     cout<<p[1]<<endl;

// delete []p;
// p=nullptr;

 
 
//     return 0;
// }


// Eg. user giving size of array.
#include<iostream>
using namespace std;
int main()
{
 
 int size;
 cout<<"enter size of array = ";
 cin>>size;
    int *p= new int[size];
    cout<<p[5]; // accessing 5th index element.



    

//  int a[size]; 
// created in STACK. can't be modified.
 // For modification of array size we must create an array in HEAP. 


// cout<<sizeof a<<endl; 
//it will show (size * 4) because of 4 bytes of integer.




 
// what will happen to previous array after new array declaration.
// we must delete it. Or else it will lead to memory leak.
delete []p;
cout<<"enter new size = ";
cin>>size;
   p = new int[size];
    cout<<p[6]; // accessing 6th index element of new array.
    


 
    return 0;
}

