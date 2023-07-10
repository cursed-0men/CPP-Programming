// for finding samllest/minimum element in array.

#include<iostream>
using namespace std;
int main()
{
 
 int a[5]={5,6,3,8,2};
 int n = 5;
 int min;
    min = a[0];
    for (int i = 0; i < 5; i++)
    {
        if(a[i]<min){
            min = a[i];
        }
    }
    
 cout<<"minimum element = "<<min;
    return 0;
}